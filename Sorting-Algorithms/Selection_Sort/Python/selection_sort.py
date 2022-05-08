'''
    Selection Sort
    Time Complexity
        Best Case Scenario  : O(n^2)
        Worst Case Scenario : O(n^2)
'''
def selection_sort(A,n):
    for i in range(0,n-1):
        min=i
        for j in range(i+1,n):
            if(A[j]<A[min]):
                min=j
        A[min],A[i]=A[i],A[min];

arr=[1,-10,-30,20,2,11,15]
n=len(arr)
selection_sort(arr,n)
print("Array after selection sort : ", end='')
for i in arr:
    print("{} ".format(i),end="")

print()
