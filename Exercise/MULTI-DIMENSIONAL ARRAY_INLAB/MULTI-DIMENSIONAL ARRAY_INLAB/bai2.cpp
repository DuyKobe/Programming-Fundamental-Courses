#include <iostream>

using namespace std;
bool laSoNguyenTo1(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2) {
        return false;
    }
    else {
        for (int i = 2; i < (n - 1); i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
}
int primeColumns(int arr[][1000], int row, int col) {
    int count = 0;
    int sum = 0;
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            sum += arr[i][j];
        }
        if (laSoNguyenTo1(sum) == true) {
            count++; // tăng biến đếm số cột tăng dần lên 1
           
        }
        sum = 0;
    }
    return count;
}

int main() {

    int arr[][1000] = { {-64,-28,-3,64},{-56,90,57,-31} };
    cout << primeColumns(arr, 2, 4);
    return  0;
}
