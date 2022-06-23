'''
  Program to implement jump search
'''
def linear_search(A,i,n,search):
    for j in range(i,n):
        if(A[j]==search):
            print("{} is present in an array.".format(search))
            return
    print("{} is not present in an array.".format(search))

def jump(A,n,search):
    for i in range(1,n):
        if(A[i]>search):
            break
        i*=2
    linear_search(A,i//2,n,search)

N=int(input("Enter the number of elements you want to enter in an array : "))
print("Enter {} sorted elements : ".format(N),end="")
arr=[N]
for i in range(0,N):
    num=int(input())
    arr.append(num)
search=int(input("Enter the element you want to search : "))
jump(arr,N-1,search)