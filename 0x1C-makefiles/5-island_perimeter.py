#!/usr/bin/python3

"""
This module calculate and returns the perimeter of island
has a grid that is a list of list of integers:

    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don't exceed 100

> Grid is completely surrounded by water, and there is one island (or nothing).
> (water inside that isn't connected to the water around the island).
"""


def island_perimeter(grid):
    """ This function returns the perimeter of the island described in grid"""
    prmtr = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                # Each square has 4 sides.
                prmtr += 4

                # Remove the sides between each two squares to make a road
                # There are 2 sides of each square in inner land
                # not in ending squares to open the road.
                if (i != 0 and grid[i-1][j] == 1):
                    # If there is a 1 in the upper square in the same colown
                    # remove 2 sides of inner squares to open the road.
                    prmtr -= 2

                if (j != 0 and grid[i][j-1] == 1):
                    # If there is a 1 in the left square in the same raw
                    # remove 2 sides of inner square to open the road.
                    prmtr -= 2

    return prmtr
