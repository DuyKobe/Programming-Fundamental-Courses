#include"bai1.h"
#include"bai2.h"
#include"bai3.h"
#include"bai4.h"
#include"bai5.h"
int main()
{   //bai1
   // const char* str = "abbc";
   // cout << isPalindrome(str)<<endl;
    //bai2
   // int n;
    //cin >> n;
   // cout << isSpecialNumber(n)<<endl;
    //bai3
    /*
    int n, shift;
    cin >> n >> shift;
    char* text = new char[n + 1];
    for (int i = 0; i < n; i++) 
    cin >> text[i];
    text[n] = 0;
    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;
    */
    //bai4
    /*
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkElementsUniqueness(arr, n);
    delete[] arr;
    */
    cout << decimalToBinary(20);
}