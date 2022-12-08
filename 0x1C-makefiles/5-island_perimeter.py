#!/usr/bin/python3
"""returns the perimeter of the island desc"""

def island_perimeter(grid):
    """returns the perimeter"""
    top, left, right, bottom = 0, 0, len(grid[0]), len(grid)
    p = 0
    for i in range(top, bottom):
        for j in range(left, right):
            if grid[i][j] == 1:
                p += 1 if i == top or not grid[i - 1][j] else 0
                p += 1 if j == left or not grid[i][j - 1] else 0
                p += 1 if j == right - 1 or not grid[i][j + 1] else 0
                p += 1 if i == bottom - 1 or not grid[i + 1][j] else 0
    return p
