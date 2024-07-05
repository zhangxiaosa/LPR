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
fontsize_legend = 18

with open(json_path, 'r') as f:
    all_data = json.load(f)

# draw barchart
operations = all_data["operations"]
# operations_short = data.operations_short
operations_short = ['Data Type\nSimplification', 'Function\nInlining',
                    'Loop\nUnrolling',
                    'Data Type\nElimination',
                    'Variable\nElimination']

operations_full = all_data["operations_full"]
size_changes_details = all_data["size_changes_details"]

# Choosing a color palette
colors = plt.cm.Paired(range(len(operations)))

# Calculating the y-values (mean) and y-error (standard deviation) for the bar chart
y_means = []
y_stds = []
for operation in operations:
    details = size_changes_details['after'][operation]
    # Splitting into 5 groups, each with 20 data points
    grouped_details = np.array_split(details, 5)
    group_non_zero_lengths = [len([element for element in group if element != 0.00]) for group in grouped_details]
    
    # Calculating mean and standard deviation
    y_means.append(np.mean(group_non_zero_lengths))
    y_stds.append(np.std(group_non_zero_lengths))

# Sort by mean value in descending order
combined_sorted = sorted(zip(y_means, y_stds, operations_short, colors), key=lambda x: x[0], reverse=True)
y_means_sorted, y_stds_sorted, operations_short_sorted, colors_sorted = zip(*combined_sorted)

# Creating the bar chart
fig, ax = plt.subplots(figsize=(10, 4))
bars = ax.bar(operations_short_sorted, y_means_sorted, yerr=y_stds_sorted, color=colors_sorted, capsize=10)

# Adding the text on top of each bar
for bar, std in zip(bars, y_stds_sorted):
    yval = bar.get_height()
    ax.text(bar.get_x() + bar.get_width()/2, yval / 4, f"{yval:.1f}±{std:.1f}",
            verticalalignment='bottom', horizontalalignment='center',
            fontsize=fontsize, color='black')

# Setting font size for labels and ticks
ax.set_ylabel('Number of Benchmarks', fontsize=fontsize-2)
ax.set_xlabel('Transformations', fontsize=fontsize+4)
plt.xticks(fontsize=fontsize, rotation=0)
plt.yticks(fontsize=fontsize)
plt.yticks(np.arange(0, 22, 5))
ax.set_ylim(0, 22)

# Manually adjusting the margins to fit the legend
fig.subplots_adjust(left=0.14, right=0.99, top=0.99, bottom=0.1)

plt.tight_layout()
# Saving the adjusted plot as a PDF file
plt.savefig(os.path.join(os.path.dirname(json_path), 'size_changes_barchart.pdf'))
