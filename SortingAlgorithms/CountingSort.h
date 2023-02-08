#pragma once

int FindMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void CountingSort(int arr[], int n)
{
    // Cannot dynamically declare size of the array.
    // Will just assume that the size of the array is less than 10.
    int max = FindMax(arr, n);
    int output_arr[10];
    int count_arr[10];


    for (int i = 0; i <= max; i++)
    {
        count_arr[i] = 0;
        output_arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count_arr[arr[i]]++;
    }

    for (int i = 0; i <= max - 1; i++)
    {
        count_arr[i + 1] += count_arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        output_arr[count_arr[arr[i]] - 1] = arr[i];
        count_arr[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output_arr[i];
    }
}