import os, sys
import json
import matplotlib.pyplot as plt
import numpy as np

json_path = sys.argv[1]

os.environ['LC_ALL'] = 'C.UTF-8'
os.environ['LANG'] = 'C.UTF-8'
plt.rcParams['font.family'] = 'Times New Roman'
plt.rcParams['pdf.fonttype'] = 42
fontsize = 22
fontsize_legend = 24

with open(json_path, 'r') as f:
    all_data = json.load(f)

operations = all_data['operations']
operations_short = all_data['operations_short']
operations_full = all_data['operations_full']
size_changes_average = all_data['size_changes_average']
size_changes_average = [-1 * data for data in size_changes_average]

# Choosing a color palette
colors = plt.cm.Paired(range(len(operations)))

# List of custom position multipliers for each text element
custom_position_multipliers = [0.6, 0.4, 0.65, 0.5, 0.7]  # Adjust this list as needed

# Plotting the pie chart without the default percentage display
fig, ax = plt.subplots(figsize=(10, 5))
wedges, texts = ax.pie(size_changes_average, startangle=45, colors=colors, radius=1)

bbox_props = dict(boxstyle="square,pad=0.3", fc="w", ec="k", lw=0.72)

kw = dict(arrowprops=dict(arrowstyle="->"),
           zorder=0, va="center", fontsize=fontsize)

for i, p in enumerate(wedges):
    ang = (p.theta2 - p.theta1)/2. + p.theta1
    y = np.sin(np.deg2rad(ang))
    x = np.cos(np.deg2rad(ang))
    horizontalalignment = {-1: "right", 1: "left"}[int(np.sign(x))]
    connectionstyle = f"angle,angleA=0,angleB={ang}"
    kw["arrowprops"].update({"connectionstyle": connectionstyle})

    percentage = f'{1.0 * size_changes_average[i] / sum(size_changes_average) * 100:.2f}%'
    value = f'{size_changes_average[i] * 1.0:.1f}'  # Transformation value divided by 20
    text = f'{operations[i]}\n {percentage}, {value} tokens'

    ax.annotate(text, xy=(x, y), xytext=(1.15*np.sign(x), 1.1*y),
                horizontalalignment=horizontalalignment, **kw)

plt.tight_layout()
# Saving the adjusted plot as a PDF file
plt.savefig(os.path.join(os.path.dirname(json_path), 'size_changes_piechart.pdf'))
