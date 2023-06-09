﻿// POINTER BASIC_INLAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

int calcSum(int* ptr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    return sum;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    cout << calcSum(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
