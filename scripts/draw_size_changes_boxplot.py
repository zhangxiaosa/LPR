import os, sys
import json
import matplotlib.pyplot as plt
import matplotlib
import numpy as np

json_path = sys.argv[1]

os.environ['LC_ALL'] = 'C.UTF-8'
os.environ['LANG'] = 'C.UTF-8'
plt.rcParams['font.family'] = 'Times New Roman'
fontsize = 25
tick_label_size = 25
markersize = 20
linewidth = 5
plt.rcParams.update({'font.size': fontsize})
matplotlib.rcParams['pdf.fonttype'] = 42
matplotlib.rcParams['ps.fonttype'] = 42

with open(json_path, 'r') as f:
    all_data = json.load(f)

# import data
operations = all_data["operations"]
data = all_data["size_changes_details"]

# Directory to save plots
save_dir = os.path.dirname(json_path)

# Modified function to create and save individual plots with corrected upper and lower boundaries
def create_and_save_plots(data, operations, save_dir):
    file_paths = []
    for operation in operations:

        fig, ax = plt.subplots(figsize=(6, 6))

        # Adding a horizontal grey dashed line at y=0
        ax.axhline(y=0, color='grey', linestyle='--', alpha=0.7, linewidth=linewidth)

        # Plot data for 'before' and 'after'
        bp_before = ax.boxplot(data['before'][operation], positions=[1], widths=0.35, patch_artist=False)
        bp_after = ax.boxplot(data['after'][operation], positions=[2], widths=0.35, patch_artist=False)

        # before
        y_before = data['before'][operation]
        x_before = np.linspace(1 - 0.35 / 2, 1 + 0.35 / 2, len(y_before))
        ax.plot(x_before, y_before, '.', alpha=0.5, color='red', markersize=markersize)

        # after
        y_after = data['after'][operation]
        x_after = np.linspace(2 - 0.35 / 2, 2 + 0.35 / 2, len(y_after))
        ax.plot(x_after, y_after, '.', alpha=0.5, color='blue', markersize=markersize)

        # Calculate the upper and lower boundaries based on the highest and lowest whiskers of the boxplots
        upper_boundary = max(bp_before['whiskers'][1].get_ydata()[1], bp_after['whiskers'][1].get_ydata()[1])
        lower_boundary = min(bp_before['whiskers'][0].get_ydata()[1], bp_after['whiskers'][0].get_ydata()[1])
        margin = (upper_boundary - lower_boundary) * 0.12

        ax.set_ylim(lower_boundary - 4*margin, upper_boundary + 1.5*margin)

        ax.set_xticklabels([])

        ax.tick_params(axis='y', labelsize=tick_label_size)

        # compute average
        avg_before = np.mean(data['before'][operation])
        avg_after = np.mean(data['after'][operation])

        # add text
        ax.text(0.25, 0.04, f'$\mu: {avg_before:,.1f}$', ha='center', va='center', transform=ax.transAxes)
        ax.text(0.75, 0.04, f'$\mu: {avg_after:,.1f}$', ha='center', va='center', transform=ax.transAxes)

        plt.tight_layout()
        # Save plot
        file_path = os.path.join(save_dir, f'size_changes_{operation.lower().replace(" ", "_")}.pdf')
        plt.savefig(file_path)
        file_paths.append(file_path)
        plt.close()

    return file_paths

# Create and save the plots with corrected bounds
plot_file_paths = create_and_save_plots(data, operations, save_dir)