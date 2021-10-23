import numpy # import numpy

# Python program that uses twodimensional arrays an nested for loops
numberGrid = numpy.array([ #  Using the numpy.array() function to create a two dimensional matrix
    [1, 2],
    [3, 4],
    [5, 6]
])

print() # newline

for i in range(len(numberGrid)): # This loop iterates over the elements in the first array

    for j in range(len(numberGrid[i])): # This nested loop iterates over the elements in the second array
        print(numberGrid[i][j])

    print()