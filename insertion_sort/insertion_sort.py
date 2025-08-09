import numpy as np

array = np.random.randint(1, 1000, 100)

# insertion sort algorithm
def insertion_sort(array):
    # starts in 1 for avoiding index out of bounds
    for j in range(1, len(array)):
        # tmp storing arr[j] for shifting
        key = array[j]

        # prev element arr[j - 1] = arr[i]
        i = j - 1
        
        # while arr[i] is greater than key
        while i >= 0 and key < array[i]:

            # shift using index i to j (i + 1)
            array[i + 1] = array[i]

            # do it until arr[i] is not greater than key
            i = i - 1
        
        array[i + 1] = key

    return array

print(insertion_sort(array))