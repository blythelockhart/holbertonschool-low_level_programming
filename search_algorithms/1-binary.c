#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    size_t i;

    if (array == NULL)
        return (-1);
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}