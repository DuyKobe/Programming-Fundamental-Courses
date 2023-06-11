/*Cho mảng 2 chiều chứa các số nguyên, kích thước N x N.

Hiện thực hàm:

int diagonalProduct(int arr[][1000], int row, int col);
Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Tìm tích của tất cả các phần tử trong đường chéo chính của mảng.

Ghi chú: (Các) thư viện iostream, và string đã được khai báo, và namespace std đã được sử dụng.*/

/*
#include <iostream>
using namespace std;
int diagonalProduct(int arr[][1000], int row, int col) {
    int tich = 1;
    //duyet hang cua ma tran
    for (int i = 0; i < row; i++) {
        //duyet cot cua ma tran
        for (int j = 0; j < col; j++) {
            if (i == j) {
                tich *= arr[i][j];
            }
        }
    }
    return tich;
} 
int main() {
    int arr[][1000] = { {-11,44,18,33},{-34,-9,-42,-42},{47,-26,4,-8},{-35,11,-34,-19} };
    cout << diagonalProduct(arr, 4, 4);
}
*/