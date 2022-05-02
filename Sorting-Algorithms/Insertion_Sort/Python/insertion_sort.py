'''
    Insertion Sort
    Time Complexity
        Best Case Scenario  : O(n)
        Worst Case Scenario : O(n^2)
'''
def insertion_sort(arr,n):
    for i in range(0,n):
        key=arr[i]
        j=i-1
        while(j>=0 and arr[j]>key):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key

arr=[1,-10,-30,20,2,11,15]
n=len(arr)
insertion_sort(arr,n)
print("Array after insertion sort : ", end='')
for i in arr:
    print("{} ".format(i),end="")

print()
