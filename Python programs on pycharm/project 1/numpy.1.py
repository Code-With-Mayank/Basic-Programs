import numpy as np

arr = np.array(
    [[100, 20, 35, 50, 2], [69, 465, 7, 500, 212], [2, 55, 4, 10, 50], [96, 45, 22, 8, 7], [143, 222, 200, 52, 38]])
print(arr)


def diagonalsMinMax(mat):
    n = len(mat)
    if (n == 0):
        return

    principalMin = mat[0][0]
    principalMax = mat[0][0]
    secondaryMin = mat[0][n - 1]
    secondaryMax = mat[0][n - 1]

    for i in range(1, n):

        for j in range(1, n):

            if (i == j):

                if (mat[i][j] < principalMin):
                    principalMin = mat[i][j]

                if (mat[i][j] > principalMax):
                    principalMax = mat[i][j]

            if ((i + j) == (n - 1)):

                if (mat[i][j] < secondaryMin):
                    secondaryMin = mat[i][j]

                if (mat[i][j] > secondaryMax):
                    secondaryMax = mat[i][j]

    print("Primary Diagonal Smallest Element: ",
          principalMin)
    print("Primary Diagonal Greatest Element : ",
          principalMax)

    print("Secondary Diagonal Smallest Element: ",
          secondaryMin)
    print("Secondary Diagonal Greatest Element: ",
          secondaryMax)


diagonalsMinMax(arr)
