#pragma once

void SelectionSort(int arr[], int n)
{
    int i, j;
    int min_id;

    for (i = 0; i < n - 1; i++)
    {
        min_id = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min_id] > arr[j])
            {
                min_id = j;
            }
        }
        int temp = arr[min_id];
        arr[min_id] = arr[i];
        arr[i] = temp;
    }
}