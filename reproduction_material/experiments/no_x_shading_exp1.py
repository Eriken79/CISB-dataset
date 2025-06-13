import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.pyplot as plt
from matplotlib.lines import Line2D

symbol_map = {0: r"\textcolor{white}{ }",  # Empty space for LaTeX
              1: r"\textcolor{green}{$\checkmark$}",
              2: r"\textcolor{blue}{?}"}

df = pd.read_csv("./csv_files/experiment_1.csv")
df["config"] = df["compiler"] + "_" + df["optimization_level"] + "_" + df["architecture"]
pivot_table = df.pivot(index="config", columns="test_id", values="output")
symbol_table = pivot_table.replace(symbol_map)
latex_table = pivot_table.to_latex(escape=False)  # Keep LaTeX symbols intact

with open("./figure_out_x86/experiment_1_x86.tex", "w") as f:
    f.write(latex_table)

print(pivot_table)

# Define colors and symbols for plotting - empty string for 0 (no X)
symbol_map = {0: ("", "red"),      # Empty string, no symbol displayed
              1: ("✓", "green"),
              2: ("?", "blue")}

fig, ax = plt.subplots(figsize=(10, 6))

# Add alternating row shading BEFORE plotting symbols
for i in range(len(pivot_table.index)):
    if i % 2 == 0:  # Even rows (0, 2, 4, ...)
        ax.axhspan(i-0.5, i+0.5, facecolor='lightgray', alpha=0.3, zorder=0)

# Iterate through the DataFrame and plot text
for i, row in enumerate(pivot_table.index):
    for j, col in enumerate(pivot_table.columns):
        value = df.loc[(df["config"] == row) & (df["test_id"] == col), "output"].values
        if value.size > 0:  # Ensure value exists
            symbol, color = symbol_map.get(value[0], ("", "black"))
            if symbol:  # Only plot if symbol is not empty
                ax.text(j, i, symbol, fontsize=14, color=color, ha="center", va="center", zorder=1)


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
ax.set_title("Initial Experiment (x86-64)")

# Create custom legend with only checkmark (centered)
legend_y = -0.25
symbol_size = 12
text_size = 10

# Single centered legend item
ax.text(0.27, legend_y, '✓', color='green', fontsize=symbol_size, ha='center', va='center', transform=ax.transAxes)
ax.text(0.29, legend_y, ': CISB Present', color='black', fontsize=text_size, ha='left', va='center', transform=ax.transAxes)
ax.text(0.60, legend_y, '?', color='blue', fontsize=12, ha='center', va='center', transform=ax.transAxes)
ax.text(0.62, legend_y, ': Test Case Invalid', color='black', fontsize=10, ha='left', va='center', transform=ax.transAxes)

# Adjust bottom margin
fig.subplots_adjust(bottom=0.5)
fig.tight_layout(pad=2.0)

# Save figure as PDF for LaTeX
plt.savefig("./figure_out_x86/experiment_1_x86.pdf", bbox_inches="tight", dpi=300)
plt.show()
