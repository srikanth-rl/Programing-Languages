import heapq as h
l = []; 
def heapSort(arr,n):
    [h.heappush(l,val) for val in arr]
    return [h.heappop(l) for i in range(len(l))]
l=heapSort([3,-1,3,4,7,0,2],7)
print(l);large=h.nlargest(3,l)
print('\n3rd largest ele:',large,large[-1]);small=h.nsmallest(3,l)
print('\n3rd smallest ele:',small,small[-1])