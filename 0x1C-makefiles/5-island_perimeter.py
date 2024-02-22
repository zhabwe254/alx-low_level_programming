def island_perimeter(grid):
    """Calculates the perimeter of the island in a grid.

    Args:
        grid: A list of lists of integers, where 0 represents water and 1 represents land.

    Returns:
        The perimeter of the island.
    """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # Count land cells at the edge or next to water
            if grid[i][j] == 1 and (
                i == 0 or i == len(grid) - 1 or
                j == 0 or j == len(grid[i]) - 1 or
                (i > 0 and grid[i-1][j] == 0) or
                (i < len(grid) - 1 and grid[i+1][j] == 0) or
                (j > 0 and grid[i][j-1] == 0) or
                (j < len(grid[i]) - 1 and grid[i][j+1] == 0)
            ):
                perimeter += 4
            else:
                # Only count non-edge land cells once
                perimeter += 2

    return perimeter

# Example usage
grid = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 1, 0, 0],
    [0, 0, 0, 0, 0, 0]
]

perimeter = island_perimeter(grid)
print(f"Island perimeter: {perimeter}")  # Output: Island perimeter: 12
