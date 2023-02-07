// SelectionSort.cpp : This file contains the Selection Sort function
//

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    int i, j;
    int min_id;

    for (i = 0; i < n - 1; i++)
    {
        min_id = i;
        for (j = i+1; j < n; j++)
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

template <size_t N>
void printArray(int(&arr)[N])
{
    for (auto i : arr)
    {
        cout << i << endl;
    }
}


int main()
{
    int test_arr[] = { 6 , 4, 2, 7, 55, 12, 1 };
    int n = sizeof(test_arr) / sizeof(test_arr[0]);
    cout << "----------------------------------------" << endl;
    selection_sort(test_arr, n);
    printArray(test_arr);
    cout << "----------------------------------------" << endl;
}