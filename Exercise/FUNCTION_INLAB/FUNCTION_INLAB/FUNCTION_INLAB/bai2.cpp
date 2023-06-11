/*
Câu 2:
Một số tự nhiên n được gọi là đặc biệt khi và chỉ khi n là số nguyên tố và tổng các chữ số của n cũng là số nguyên tố. Viết hàm kiểm tra một số tự nhiên có đặc biệt hay không.
Đầu vào:
int n: số tự nhiên cần kiểm tra có phải số đặc biệt không
Đầu ra:
bool: trả về true nếu n là số đặc biệt, ngược lại trả về false*/
#include"bai2.h"
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
bool isSpecialNumber(int n) {
    int s = 0;
    int a = n;
    while (a > 0) {
        s = s + a % 10;
        a = a / 10;
    }
    if (laSoNguyenTo1(n) == true && laSoNguyenTo1(s) == true) {
        return true;
    }
    return false;
}