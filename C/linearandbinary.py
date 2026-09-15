def linear_search(arr, key):
    for i in arr:
        if i == key:
            return True
    return False
    
def binary_search(arr, key):
    low=0
    high=len(arr)-1
    while low<=high:
        mid=(low+high)//2
        if arr[mid] == key:
            return True
        elif arr[mid]<key:
            low=mid+1
        else:
            high=mid-1
            
ids=[]
n=int(input("Enter the number of employees"))

for i in range(n):
    k=int(input("Enter Salary:"))
    ids.append(k)

key=int(input("Entwr the id to search"))
    
print("\nlinear search")
if linear_search(ids,key):
    print("Element found")
else:
    print("Element not found")
    
print("\nBinary search")
if binary_search(ids,key):
    print("Element found")
else:
    print("Element not found")

            
            
    
 
