/*Cho mảng 2 chiều chứa các số nguyên, kích thước N x N.

Hiện thực hàm:

bool isSymmetric(int arr[][1000], int row, int col);
Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. 
Một ma trận được gọi là đối xứng nếu với mọi i, j; giá trị của phần tử ở hàng i, cột j luôn bằng giá trị của phần tử ở hàng j, cột i. 
Kiểm tra xem mảng này có phải là một ma trận đối xứng hay không; trả về true nếu mảng này là ma trận đối xứng; ngược lại, trả về false.

Ghi chú: (Các) thư viện iostream và string đã được khai báo, và namespace std đã được sử dụng.*/
/*
#include <iostream>
using namespace std;
bool isSymmetric(int arr[][1000], int row, int col) {
    {
        int i, j;
        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {
                if (arr[i][j] != arr[j][i])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
}
int main() {
    int arr[][1000] = { {1,4,6}, {4,5,3}, {6,3,9} };
    cout << isSymmetric(arr, 3, 3);
}
*/