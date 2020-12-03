# Given an unsorted array with repetitions,
# the task is to group multiple occurrence of individual elements.
# The grouping should happen in a way that the order of first occurrences of all elements is maintained.

def fun(arr):
    d = dict()
    for i in arr:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    print(d)
    for i in d:
        count = d[i]
        for j in range(count):
            print(f"{i},", end="")


if __name__ == '__main__':
    arr = [int(x) for x in input().split(' ')]
    fun(arr)
