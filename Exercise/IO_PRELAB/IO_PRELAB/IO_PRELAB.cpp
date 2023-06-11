// IO_PRELAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
    void calSum(string fileName) {
	    FILE* p = fopen("fileName", "r");
	    int sum = 0;
	    int num; 
        while (fscanf(p, "%d", &num) != EOF) { // đọc số nguyên từ file
            if (num >= 0) { // nếu số nguyên không âm thì cộng vào tổng
                sum += num;
            }
        }
        fclose(p); // đóng file
        printf("Tong la: %d", sum); // in tổng ra màn hình
    }

int main()
{
   cout << "Hello World!\n";
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
