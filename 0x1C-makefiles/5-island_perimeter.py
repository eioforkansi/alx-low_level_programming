def island_perimeter(grid):
	
	if not grid or not grid[0]:
		return 0
	
	rows = len(grid)
	cols = len(grid[0])
	perimeter = 0
	edges = 0

	for r in range(rows):
		for c in range(cols):
			if grid[r][c] == 1:
				perimeter += 1

				if (r > 0 and grid[r-1][c] == 1):
					edges += 1

				if (c > 0 and grid[r][c-1] == 1):
					edges += 1

	return perimeter * 4 - edges * 2

