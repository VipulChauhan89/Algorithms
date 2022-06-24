'''
    Bubble Sort
    Time Complexity
        Best Case Scenario  : O(n)
         Avergae Case Scenario : O(n^2)
        Worst Case Scenario : O(n^2)
'''
def bubble_sort(arr,n):
    for i in range(0,n-1):
        for j in range(0,n-i-1):
            if(arr[j]>arr[j+1]):
                arr[j+1],arr[j]=arr[j],arr[j+1]

arr=[1,-10,-30,20,2,11,15]
n=len(arr)
bubble_sort(arr,n)
print("Array after bubble sort : ", end='')
for i in arr:
    print("{} ".format(i),end="")

print()
