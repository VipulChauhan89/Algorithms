'''
    Counting Sort
    Time Complexity
        Best Case Scenario  : O(n+k)
        Average Case Scenario  : O(n+k)
        Worst Case Scenario : O(n+k)
'''
def countingSort(A,n):
    k=A[0]
    output=[0]*(n)
    for i in range(0,n):
        if(k<A[i]):
            k=A[i]
    
    count=[0]*(k+1)
    for i in range(0,n):
        count[A[i]]+=1
    for i in range(1,k+1):
        count[i]+=count[i-1]
    for i in range(n-1,-1,-1):
        count[A[i]]-=1
        output[count[A[i]]]=A[i]
    for i in range(0,n):
        A[i]=output[i]

arr=[1,10,30,20,2,11,15]
n=len(arr)
countingSort(arr,n)
print("Array after counting sort : ", end='')
for i in arr:
    print("{} ".format(i),end="")

print()
