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
#legend_elements = [
#    Line2D([0], [0], marker='$✓$', color='w', markerfacecolor='green', markersize=10, label=': CISB Present'),
#    Line2D([0], [0], marker='$✗$', color='w', markerfacecolor='red', markersize=10, label=': CISB Not Present'),
#    Line2D([0], [0], marker='$?$', color='w', markerfacecolor='blue', markersize=10, label=': Test Case Invalid')
#]
#legend_elements = [
#    Line2D([0], [0], linestyle='None', marker='None', label='✓: CISB Present'),
#    Line2D([0], [0], linestyle='None', marker='None', label='✗: CISB Not Present'),
#    Line2D([0], [0], linestyle='None', marker='None', label='?: Test Case Invalid')
#]
legend_elements = [
    Line2D([0], [0], linestyle='None', marker='None', label='PLACEHOLDER1'),
    Line2D([0], [0], linestyle='None', marker='None', label='PLACEHOLDER2'),
    Line2D([0], [0], linestyle='None', marker='None', label='PLACEHOLDER3')
]

legend = plt.legend(handles=legend_elements, loc='lower center', bbox_to_anchor=(0.5, -0.30),
           ncol=3, frameon=False)
legend.remove()
legend_y = -0.30  # Adjust position as needed
ax.text(0.12, legend_y, '✓', color='green', fontsize=12, ha='center', va='center', transform=ax.transAxes)
ax.text(0.14, legend_y, ': CISB Present', color='black', fontsize=10, ha='left', va='center', transform=ax.transAxes)

ax.text(0.42, legend_y, '✗', color='red', fontsize=12, ha='center', va='center', transform=ax.transAxes)
ax.text(0.44, legend_y, ': CISB Not Present', color='black', fontsize=10, ha='left', va='center', transform=ax.transAxes)

ax.text(0.75, legend_y, '?', color='blue', fontsize=12, ha='center', va='center', transform=ax.transAxes)
ax.text(0.77, legend_y, ': Test Case Invalid', color='black', fontsize=10, ha='left', va='center', transform=ax.transAxes)
#for text in legend.get_texts():
#    text.set_fontsize(14);
#    text.set_color('black')  # Ensure base text is black

fig.subplots_adjust(bottom=0.4)
fig.tight_layout(pad=2.0)
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
ax.axvline(x=3.5, color='black', linestyle='-', linewidth=1, alpha=0.7)   # After anly-9.c, before cast-1.c
ax.axvline(x=8.5, color='black', linestyle='-', linewidth=1, alpha=0.7)   # After cast-6.c, before concur-1.c  
ax.axvline(x=10.5, color='black', linestyle='-', linewidth=1, alpha=0.7)  # After concur-3.c, before overflow-1.c
ax.axvline(x=13.5, color='black', linestyle='-', linewidth=1, alpha=0.7)  # After overflow-3.c, before std-1.c
# Save figure as PDF for LaTeX
plt.savefig("./figure_out_x86/experiment_2_x86.pdf", bbox_inches="tight", dpi=300)
plt.show()

