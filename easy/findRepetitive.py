# // Question- We are given an array arr[] of size n. Numbers are from 1 to (n-1) in random order.
# // The array has only one repetitive element. We need to find the repetitive element.
#
#
# // Idea 1 - use hashing
# // Time= O(n)
# // Space- O(n)

def find(arr):
    s=set()
    for i in arr:
        if i in s:
            print(i)
        s.add(i)

if __name__=='__main__':
    arr=[1,2,3,4,5,1]
    find(arr)


# Idea 2- XOR - x^x=0
# // Time= O(n)
# // Space- O(1)
def find(arr):
    res=0
    for i in range(6):
        res=res^(i+1)^arr[i]

    print(res)

if __name__=='__main__':
    arr=[1,2,3,4,5,1]
    find(arr)
