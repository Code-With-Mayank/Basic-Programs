import numpy as np

a = np.array([[1,2],[3,4]])
b = np.repeat(2,4).reshape(2,2)

print(np.vstack((a,b)))
print(np.hstack((a,b)))

np.concatenate([a,b], axis=0)
np.concatenate([a,b], axis=1)

print(np.concatenate)

np.r_['0',a,b]
np.r_['1',a,b]

np.tile(a,3)
np.tile(a,(3,3))