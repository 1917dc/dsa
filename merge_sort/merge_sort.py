import numpy as np

def merge(arr, left, right):
    i = 0
    j = 0
    k = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1
    
    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1
    
    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1
        
def mergeSort(arr):
    if len(arr) > 1:
        middle = len(arr)//2
        
        left = arr[:middle]
        right = arr[middle:]
        
        mergeSort(left)
        mergeSort(right)
        merge(arr, left, right)

arr = [1,3,27,5,8,4,9,11,80,34,50]      

print(f"input {arr}")
mergeSort(arr)  
print(f"output {arr}")