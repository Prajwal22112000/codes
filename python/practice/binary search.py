arr = [0, 1, 2, 3, 23, 543, 2342, 34341, 535325, 6565334, 6234234234, 3242343054532]
n = 2
def bnfunc(arr, n):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == n:
            return mid
        elif arr[mid] > n:
            right = mid - 1
        elif arr[mid] < n:
            left = mid + 1

for i in arr:
    print(bnfunc(arr, i))