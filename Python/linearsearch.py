def linear_search(arr, key):
    """
    This function takes two parameters, 
    'arr' an array of integer type elements and 
    'key' an integer  to be searched for in the given array.
    This function returns an integer containing the index of the
    key in the array or -1 if key is not present in the array
    """
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1


ls = list(map(int, input().split()))  # List input given as integers separated by space    
key = int(input())  # Key input given as an integer

ans = linear_search(ls, key)
print(f'Key found at index {ans}' if ans != -1 else 'Key not found in the array')
