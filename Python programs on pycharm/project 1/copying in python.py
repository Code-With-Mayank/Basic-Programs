import copy

lst3=[[1,2],[3,4],[6,7]]
lst4=copy.deepcopy(lst3)
print(id(lst3))
print(id(lst4))
lst3.append([8,9])
lst3[1][1]=3
print(lst3)
print(lst4)