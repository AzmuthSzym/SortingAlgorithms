// SortingAlgorithms.cpp : This file contains the 'main' function.
//

#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "CountingSort.h"

using namespace std;

template <size_t N>
void printArray(int(&arr)[N])
{
    for (auto i : arr)
    {
        cout << i << endl;
    }
}

// TODO: TIME MEASUREMENT

int main()
{
    
    int test_arr[] = { 6, 4, 2, 7, 5, 1 };
    int n = sizeof(test_arr) / sizeof(test_arr[0]);
    int choice;

    cout << "----------------------------------------" << endl;
    cout << "ARRAY BEFORE SORTING" << endl;
    printArray(test_arr);
    cout << "----------------------------------------\n" << endl;

    cout << "MAKE YOUR CHOICE" << endl;
    cout << "0 - bubble, 1 - selection, 2 - insertion, 3 - counting" << endl;
    cin >> choice;

    switch (choice)
    {
    case 0:
        cout << "BUBBLE SORT" << endl;
        cout << "----------------------------------------" << endl;
        BubbleSort(test_arr, n);
        printArray(test_arr);
        cout << "----------------------------------------\n" << endl;
        break;
    case 1:
        cout << "SELECTION SORT" << endl;
        cout << "----------------------------------------" << endl;
        SelectionSort(test_arr, n);
        printArray(test_arr);
        cout << "----------------------------------------\n" << endl;
        break;
    case 2:
        cout << "INSERTION SORT" << endl;
        cout << "----------------------------------------" << endl;
        InsertionSort(test_arr, n);
        printArray(test_arr);
        cout << "----------------------------------------\n" << endl;
        break;
    case 3:
        cout << "COUNTING SORT" << endl;
        cout << "----------------------------------------" << endl;
        CountingSort(test_arr, n);
        printArray(test_arr);
        cout << "----------------------------------------\n" << endl;
        break;
    default:
        cout << "YOU DIDNT CHOOSE VALID OPTION" << endl;
        break;
    }

}