'''
    Randomize Quick Sort
    Time Complexity
        Best Case Scenario  : O(n*log n)
        Average Case Scenario : O(n*log n)
        Worst Case Scenario : O(n*log n)
'''
import random
def partion(arr,l,r):
    rand=int(l+random.random()%(r+l))
    arr[rand],arr[r]=arr[r],arr[rand]
    pivot=arr[r]
    i=l-1
    for j in range(l,r):
        if(arr[j]<pivot):
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[r]=arr[r],arr[i+1]
    return i+1

def randomize_quick_sort(arr,l,r):
    if(l<r):
        pivot=partion(arr,l,r)
        randomize_quick_sort(arr,l,pivot-1)
        randomize_quick_sort(arr,pivot+1,r)
    return

arr=[1,-10,-30,20,2,11,15]
n=len(arr)
randomize_quick_sort(arr,0,n-1)
print("Array after randomize quick sort : ",end="")
for i in range(0,n):
    print("{} ".format(arr[i]),end="")

print()
