// SortingAlgorithms.cpp : This file contains the 'main' function.
//

#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"

using namespace std;

template <size_t N>
void printArray(int(&arr)[N])
{
    for (auto i : arr)
    {
        cout << i << endl;
    }
}

// TODO: SWITCH TO CHOOSE ONLY ONE ALGORITHM
// TODO: TIME MEASUREMENT

int main()
{
    int test_arr[] = { 6 , 4, 2, 7, 55, 12, 1 };
    int test_arr2[] = { 6 , 4, 2, 7, 55, 12, 1 };
    int n = sizeof(test_arr) / sizeof(test_arr[0]);
    cout << "----------------------------------------" << endl;
    cout << "ARRAY BEFORE SORTING" << endl;
    printArray(test_arr);
    cout << "----------------------------------------\n" << endl;

    cout << "BUBBLE SORT" << endl;
    cout << "----------------------------------------" << endl;
    selection_sort(test_arr, n);
    printArray(test_arr);
    cout << "----------------------------------------\n" << endl;

    cout << "SELECTION SORT" << endl;
    cout << "----------------------------------------" << endl;
    selection_sort(test_arr2, n);
    printArray(test_arr2);
    cout << "----------------------------------------\n" << endl;
}