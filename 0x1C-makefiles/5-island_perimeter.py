#!/usr/bin/python3
"""This module contains the function: island_perimeter.
"""


def island_perimeter(grid):
    """Given a grid (list of lists) with 0s and 1s, with 1s representing
        an island, computes the perimeter of the island.
    """
    perimeter = 0
    if not grid:
        return perimeter
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                if i-1 >= 0 and i+1 < len(grid):
                    perimeter += 4 - (row[j-1] + row[j+1] + grid[i-1][j] +
                                      grid[i+1][j])
                elif i-1 < 0 and i+1 < len(grid):
                    perimeter += 3 - (row[j-1] + row[j+1] + grid[i+1][j])
                elif i-1 >= 0 and i+1 >= len(grid):
                    perimeter += 3 - (row[j-1] + row[j+1] + grid[i-1][j])
                else:
                    perimeter += 2 - (row[j-1] + row[j+1])
                if j+1 < len(row) and row[j+1] == 0:
                    break
    return perimeter
