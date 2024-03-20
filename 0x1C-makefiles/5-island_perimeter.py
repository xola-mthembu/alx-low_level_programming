#!/usr/bin/python3
"""
Module to find the perimeter of an island in a grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    0 represents a water zone
    1 represents a land zone
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
    return perimeter
