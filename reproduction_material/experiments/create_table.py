import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.pyplot as plt
from matplotlib.lines import Line2D


symbol_map = {0: r"\textcolor{red}{$\times$}", 
              1: r"\textcolor{green}{$\checkmark$}", 
              2: r"\textcolor{blue}{?}"}

df = pd.read_csv("./csv_files/experiment_2.csv")

df["config"] = df["compiler"] + "_" + df["optimization_level"] + "_" + df["architecture"]

pivot_table = df.pivot(index="config", columns="test_id", values="output")

symbol_table = pivot_table.replace(symbol_map)

latex_table = pivot_table.to_latex(escape=False)  # Keep LaTeX symbols intact

with open("./figure_out_x86/experiment_2_x86.tex", "w") as f:
    f.write(latex_table)


print(pivot_table)


# Define colors and symbols for plotting
symbol_map = {0: ("✗", "red"), 
              1: ("✓", "green"), 
              2: ("?", "blue")}

fig, ax = plt.subplots(figsize=(10, 6))
legend_elements = [
    Line2D([0], [0], marker='None', color='green', label='✓: CISB Present', linestyle='None', markersize=10),
    Line2D([0], [0], marker='None', color='red', label='✗: CISB Not Present', linestyle='None', markersize=10),
    Line2D([0], [0], marker='None', color='blue', label='?: Test Case Invalid', linestyle='None', markersize=10)
]

plt.legend(handles=legend_elements, loc='lower center', bbox_to_anchor=(0.5, -0.30),
           ncol=3, frameon=False)
fig.subplots_adjust(bottom=0.3)
"""
# Add a manual legend with text symbols
legend_y = len(pivot_table.index) + 0.5  # below the last row
ax.text(-0.5, legend_y, "Legend:", fontsize=12, fontweight='bold', ha='left')

ax.text(1, legend_y, "✓: CISB Present", color='green', fontsize=12, ha='left')
ax.text(5, legend_y, "✗: CISB Not Present", color='red', fontsize=12, ha='left')
ax.text(10, legend_y, "?: Test Case Invalid", color='blue', fontsize=12, ha='left')

# Expand plot limits to make room for the legend
ax.set_ylim(-0.5, legend_y + 1
            )
"""
# Iterate through the DataFrame and plot text
for i, row in enumerate(pivot_table.index):
    for j, col in enumerate(pivot_table.columns):
        value = df.loc[(df["config"] == row) & (df["test_id"] == col), "output"].values
        if value.size > 0:  # Ensure value exists
            symbol, color = symbol_map.get(value[0], ("", "black"))
            ax.text(j, i, symbol, fontsize=14, color=color, ha="center", va="center")

# Formatting
ax.set_xticks(range(len(pivot_table.columns)))
ax.set_xticklabels(pivot_table.columns, rotation=45)
ax.set_yticks(range(len(pivot_table.index)))
ax.set_yticklabels(pivot_table.index)
ax.set_xlim(-0.5, len(pivot_table.columns)-0.5)
ax.set_ylim(-0.5, len(pivot_table.index)-0.5)
ax.invert_yaxis()  # Make sure first row appears at the top
ax.set_xlabel("Test ID")
ax.set_ylabel("Configuration")
ax.set_title("Enhanced Experiment (x86)")

# Save figure as PDF for LaTeX
plt.savefig("./figure_out_x86/experiment_2_x86.pdf", bbox_inches="tight", dpi=300)
plt.show()

