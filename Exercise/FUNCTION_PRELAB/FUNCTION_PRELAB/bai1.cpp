// FUNCTION_PRELAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Hiện thực hàm tính giai thừa của số N, sau đó gọi hàm vừa hiện thực trong hàm main để gán kết quả tính được vào biến result.

//Đầu vào :

//int N : số tự nhiên N

#include <iostream>
using namespace std;
// implement calculate factorial function in here
long giaithua(int N) {
    if (N == 0) return 1;
    return N * giaithua(N - 1);
}

int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result

    result =giaithua(N);
    cout << result << endl;
    return 0;
}