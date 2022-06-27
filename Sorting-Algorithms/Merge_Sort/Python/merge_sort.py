'''
    Merge Sort
    Time Complexity
        Best Case Scenario  : O(n*log n)
        Average Case Scenario : O(n*log n)
        Worst Case Scenario : O(n*log n)
'''
def merge(arr,l,mid,h):
    i=l
    j=mid+1
    k=l
    temp=[0]*(h+1)
    while(i<=mid and j<=h):
        if(arr[i]<=arr[j]):
            temp[k]=arr[i]
            k+=1
            i+=1 
        else:
            temp[k]=arr[j]
            k+=1
            j+=1 
    while(i<=mid): 
        temp[k]=arr[i]
        k+=1
        i+=1 
    while(j<=h):
        temp[k]=arr[j]
        k+=1
        j+=1  
    for p in range(l,h+1): 
        arr[p]=temp[p] 

def mergeSort(arr,l,h):
    if(l<h):
        mid=(l+h)//2
        mergeSort(arr,l,mid) 
        mergeSort(arr,mid+1,h)
        merge(arr,l,mid,h)

arr=[1,-10,-30,20,2,11,15]
n=len(arr)
mergeSort(arr,0,n-1)
print("Array after merge sort : ",end="")
for i in range(0,n):
    print("{} ".format(arr[i]),end="")

print()
