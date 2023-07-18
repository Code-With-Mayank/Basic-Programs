import numpy as np

a = np.array(
    [
        [101, 68, 78, 81, 92],
        [102, 77, 79, 80, 79],
        [103, 88, 90, 87, 85],
        [104, 90, 83, 93, 77],
        [105, 69, 86, 71, 87],
        [106, 78, 81, 67, 91],
        [107, 87, 77, 83, 82],
        [109, 61, 88, 71, 89],
        [111, 85, 77, 77, 78],
        [116, 81, 90, 72, 95],
    ]
)

temp = []

marks = [1,2,3,4]

for i in a:
    s = 0
    per_marks = []
    for j in marks:
        s = s + i[j]
        per_marks.append(i[j])

    per_marks.sort()

    s = s - per_marks[0]
    temp.append([i[0], s])

temp.sort(key=lambda x: x[1], reverse=True)

print(" Roll  S1  S2  S3  S4")
count = 0

for i in a:
    for j in range(5):
        if i[0] == temp[j][0]:
            print(i)
