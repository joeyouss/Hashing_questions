#Given two sets represented by two arrays, how to check if the given two sets are disjoint or not?
# It may be assumed that the given arrays have no duplicates.

def fin(arr1,arr2):
    hash = set()
    flag=0
    count= (len(arr2),len(arr1))[len(arr1) > len(arr2)]
    for i in range(count):
        hash.add(arr1[i])

    for i in arr2:
        if i not in hash:
            hash.add(i)
        else:
            print("Not disjoint")
            flag=-1
            break

    if flag==0:
        print("Disjoint")


if __name__=='__main__':
    arr1 = [int(x) for x in input().split(' ')]
    arr2 = [int(x) for x in input().split(' ')]

    fin(arr1,arr2)
