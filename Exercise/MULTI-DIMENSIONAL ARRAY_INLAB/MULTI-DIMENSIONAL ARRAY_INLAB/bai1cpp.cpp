
#include <iostream>

using namespace std;
/*Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:

int ascendingRows(int arr[][1000], int row, int col);
Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một hàng trong mảng được gọi là HN1 nếu trong hàng đó, mỗi phần tử đều có giá trị không lớn hơn các phần tử đứng sau nó. Tìm số hàng HN1 có trong mảng.

Ghi chú: (Các) thư viện iostream, và string đã được khai báo, và namespace std đã được sử dụng.*/
/*
int ascendingRows(int arr[][1000], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++) { // duyệt qua tất cả các hàng trong mảng
        bool isAscending = true; // biến đánh dấu xem hàng hiện tại có đang tăng dần hay không
        for (int j = 0; j < col - 1; j++) { // duyệt qua tất cả các cột trừ cột cuối cùng trong hàng hiện tại
            if (arr[i][j] > arr[i][j + 1]) { // nếu phần tử hiện tại lớn hơn phần tử kế tiếp
                isAscending = false; // đánh dấu hàng không đang tăng dần
                break; // thoát khỏi vòng lặp
            }
        }
        if (isAscending) { // nếu hàng đang tăng dần
            count++; // tăng biến đếm số hàng tăng dần lên 1
        }
    }
    return count; // trả về số hàng tăng dần trong mảng
}

int main() {
    int arr[3][1000] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int row = 3;
    int col = 3;
    int count = ascendingRows(arr, row, col);
    cout << "Number of ascending rows: " << count << endl;
    return 0;
}
*/