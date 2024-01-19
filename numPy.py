import  numpy as np
arr = np.arange(9)
print('The original array:')
print(arr)
print('The Modified array:')
arr2=arr.reshape(3,3)
print(arr2)
print(arr,'\nReshaped array into orginal:\n',arr2.flatten())
print('Column major:',arr2.flatten('F'))
print('Row major:',arr2.flatten('C'))
print('(default):',arr2.flatten('A'))
print('Transpose:\n',np.transpose(arr2))
# Numpy multi dim...
multi=np.arange(8).reshape(2,2,2)
print('3-D array:\n',multi)
print('Swaping numbers:\n',np.swapaxes(multi,2,1))
print('Rolling numbers:\n',np.rollaxis(multi,2,1))
print('Rolling numbers:\n',np.rollaxis(multi,1))
print('Rolling numbers:\n',np.rollaxis(multi,2))
# Numpy Arithmetic Operators...
a,b=np.arange(9).reshape(3,3),np.array([10,10,10])
print('Addition of two arrays:\n',np.add(a,b))
print('Subtraction of two arrays:\n',np.subtract(a,b))
print('Multiply of two arrays:\n',np.multiply(a,b))
print('Divide of two arrays:\n',np.divide(a,b))
# Numpy slicing...
a=np.arange(10)
print('First four elements:\n',a[:4])
print('start and end with a step(slice):\n',a[2:10:2])
# Numpy iterating...
arr = np.arange(0,45,5).reshape(3,3)
print('Printing rows:\n',*[x for x in arr])
print('Printing all elements Row-wise:\n',*[x for x in np.nditer(arr,order='C')])#for row wise order is no need...
print('Printing all elements Col-wise:\n',*[x for x in np.nditer(arr,order='F')])
print('All elements Col-wise(ravel):',a.ravel('F'))
print('All elements Col-wise(flatten):\n',*arr.flatten('F'))
# Numpy joining...
a,b=np.arange(4).reshape(2,2),np.array([[5,6],[7,8]])
print('Joining arrays For Axis=0(default):\n',np.concatenate((a,b),axis=0))
print('Joining arrays For Axis=1:\n',np.concatenate((a,b),axis=1))
# Numpy Spliting...
a=np.arange(9).reshape(3,3)
print('Spliting:',*np.split(a,[4,5,7]))
print('Spliting:',*np.split(a,[4,7]))
# Resize without giving errors...
print('Original array:\n',a)
print('Resizing but repeating no\'s:\n','Eg.1:',np.resize(a,(3,7)))
print('Eg.2:',np.resize(a,(3,2)))
print('Eg.3:',np.resize(a,(2,4)))
# useful functions...
arr=np.linspace(1,5,10)
print('10 no\'s a range:\n',arr)

a=np.resize([1,2,3,4,5,6],(2,3))
print('original array:\n',a)
print('Adding other row ele:\n','Ans:',a.sum(axis=0))
print('Adding self row ele:\n','Ans:',a.sum(axis=1))

print("Square root:",np.sqrt(a))
print("Standard deviation:",np.std(a))
print('Log:',np.log10(a))

arr=np.zeros((8,8),int)
print('Chess-Board(0,1)')
arr[1::2,::2]=arr[::2,1::2]=1
print(arr)
print('indeces of 1:\n',*np.argwhere(arr==1))
arr[np.where(arr==1)]=-5

print('Modified array:\n',arr)

arr=np.full((2,3),7)
print('Given Array with user values:\n',arr)
print('To check non-zero ele in an array:\n',np.all(arr))
arr=np.array([2,4,6,8,10,12,14,16,20,22])
print('All ele-index within a range in that array:\n',*np.where((arr>=10) & (arr<=17)))
print('All ele within a range in that array:\n',arr[np.where((arr>=10) & (arr<=17))])

b=np.array([2,3,5,4,-1])
c=np.array([-1,4,5,3])
from functools import reduce
print('Multiple array common ele:\n',reduce(np.intersect1d,(a,b,c)))

arr=np.array([2,3,1])
print('Printing the same list in itself about some times:\n',np.tile(arr,5))
x=np.resize(arr,(3,3))
print('Matrix:\n',x)
print('Sum of diagonal-ele(Matrix):\n',np.trace(x))

arr=np.array([-2.5,-3.4,-5.1,0,1,2.5,6.7])
print('Floor val in arr:\n',np.floor(arr))
print('Ceil val in arr:\n',np.ceil(arr))
print('Int val in arr:\n',np.trunc(arr))
print('Round val in arr:\n',np.rint(arr))
print('Round val to nearest integer towards zero. in arr:\n',np.fix(arr))

arr = np.array(['hi','Hello','DbMs','SRI','Pet'])
print('Title:\n',np.char.title(arr))#capitalize
print('Lower:',np.char.lower(arr),'Upper:',np.char.upper(arr),sep='\n')
print('Swap:\n',np.char.swapcase(arr))
print('Element sorting in numpy:\n',np.sort([5,7,4,3]))
print('sorted-ele will give index of original array:\n',np.argsort([5,7,4,3]))

arr=np.array([[5, 5, 5],[0, 4, 2],[1, 5, 7]])
print('The Original-Matrix:',arr,'Determinant of this Matrix:',int(np.linalg.det(arr)),sep='\n')
print('Inverse of this Matrix:\n',np.linalg.inv(arr))
arr=np.array([['aa','ff','gg'],['hh','jj','kk'],['nn','bb','mm'],['hh','jj','dd']])
print('Original MAtrix:\n',np.matrix(arr))
print('Fliping Rows or Reversing ele in its columns:\n',np.flip(arr,0))
print('Fliping Rows and reverse ele with itself (or) 180°:\n',np.flip(arr))
matrix = [[1,2,3],[4,5,6],[7,8,9]]
print('Original MAtrix:\n',np.matrix(matrix))
print('Rotate the Matrix 90° clockwise:\n',np.rot90(matrix,axes=(1,0)))
print('Rotate the Matrix 90° anti-clockwise:\n',np.rot90(matrix))
print('Rotate the Matrix (180°)anti-clockwise:\n',np.rot90(matrix,2))
print('Rotate the Matrix (270°)anti-clockwise:\n',np.rot90(matrix,3))
print('Rotate the Matrix (360°)anti-clockwise:\n',np.rot90(matrix,4))
print('Use Flip for (180°) rotation:\n',np.flip(matrix))