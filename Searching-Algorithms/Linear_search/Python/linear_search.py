# Program to implement linear search 
count=0
N=int(input("Enter the number of elements you want to enter in an array : "))
arr=[N]
print("Enter {} elements : ".format(N))
for i in range(0,N):
	num=int(input())
	arr.append(num)

search=int(input("Enter the element you want to search : "))
for i in range(0,N):
	if(search==arr[i]):
		print("{} is present in the arrray.\n".format(search))
		break
	count+=1

if(count==N):
	print("{} is not present in an array.\n".format(search))
