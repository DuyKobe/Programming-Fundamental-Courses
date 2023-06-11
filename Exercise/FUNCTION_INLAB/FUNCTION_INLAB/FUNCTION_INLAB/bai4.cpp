/*
Câu 4
Viết hàm kiểm tra các phần tử trong mảng có duy nhất hay không
Đầu vào:
int* arr: mảng số tự nhiên
int n: số lượng phần tử trong mảng
Đầu ra:
bool: trả về true nếu các phần tử trong mảng là duy nhất, ngược lại trả về false
Chú ý: arr[i] nằm trong khoảng từ [0, 1000]
*/
#include"bai4.h"
bool checkElementsUniqueness(int* arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(arr + i) == *(arr + j)) {
                return false;
            }
        }
    }
    return true;
}