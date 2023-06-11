// FUNCTION_INLAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Câu 1:
Một chuỗi được gọi là palindrome nếu chuỗi đó giống với chuỗi được đảo ngược từ chính nó. Ví dụ: “eye”, “noon”, “abcba”...
Hãy viết hàm kiểm tra xem một chuỗi có là palindrome hay không?
Đầu vào:
const char* str: chuỗi cần kiểm tra palindrome. str chỉ bao gồm chữ cái thường
Đầu ra:
bool: true nếu chuỗi str là palindrome, ngược lại false*/

//#include <iostream>
//#include<string.h>
//using namespace std;
#include"bai1.h"
bool isPalindrome(const char* str) {
    int len = 0;
    int i;
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }

    }
    return true;
}
/*
int main()
{
     const char* str = "abbc";
    cout << isPalindrome(str);
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
