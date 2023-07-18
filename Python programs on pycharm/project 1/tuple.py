# Python program to sort a list of tuples by the second Item

# Function to sort the list of tuples by its second item
def Sort_Tuple(tup):

# getting length of list of tuples
    lst = len(tup)
    for i in range(0, lst):

        for j in range(0, lst-i-1):
               if (tup[j][1] > tup[j + 1][1]):
                temp = tup[j]
                tup[j]= tup[j + 1]
                tup[j + 1]= temp
    return tup

tup =[(5,300,90), (100,63,9), (204,25,40,1001)]
print('List of tuples:' ,tup)
print('The sorted list of tuples:',Sort_Tuple(tup))