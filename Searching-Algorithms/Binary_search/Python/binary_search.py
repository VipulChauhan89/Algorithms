'''
  Program to implement binary search
'''
def Binary(A,l,h,search):
    if(l<=h):
        mid=l+(h-l)/2
        if(A[mid]==search):
            return mid
        elif(A[mid]>search):
            return Binary(A,l,mid-1,search)
        else:
            return Binary(A,mid+1,h,search)
    return -1;
N=int(input("Enter the number of elements you want to enter in an array : "))
print("Enter {} sorted elements : ".format(N))
arr=[N]
for i in range(0,N):
    num=int(input())
    arr.append(num)
search=int(input("Enter the element you want to search : "))
ans=Binary(arr,0,N-1,search)
if(ans==-1):
	print("{} is not present in an array.".format(search))
else:
    print("{0} is found at index {1}".format(search,ans))
