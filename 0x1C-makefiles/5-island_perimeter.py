#!/usr/bin/python3
"""This module contains the function: island_perimeter.
"""


def island_perimeter(grid):
    """Given a grid (list of lists) with 0s and 1s, with 1s representing
        an island, computes the perimeter of the island.
    """
    if not grid:
        return
    perimeter = 0
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                if grid[i-1] and grid[i+1]:
                    perimeter += 4 - (row[j-1] + row[j+1] + grid[i-1][j] +
                                      grid[i+1][j])
                elif not grid[i-1] and grid[i+1]:
                    perimeter += 3 - (row[j-1] + row[j+1] + grid[i+1][j])
                elif grid[i-1] and not grid[i+1]:
                    perimeter += 3 - (row[j-1] + row[j+1] + grid[i-1][j])
                else:
                    perimeter += 2 - (row[j-1] + row[j+1])
    return perimeter
