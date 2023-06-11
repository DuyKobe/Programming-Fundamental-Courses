/*Viết hàm int calc(char str[]) trả về giá trị dạng thập phân của chuỗi các bit nhị phân

- Đầu vào :

Mảng kí tự chứa chuỗi

- Đầu ra :

Giá trị dạng thập phân của chuỗi các bit nhị phân

- Các thư viện có thể dùng : <iostream>, <cstring>

-Note : Sinh viên không được sử dụng các từ khoá sau trong đoạn code nộp bài, kể cả trong comment : "include", "string"
*/
#include <iostream>
#include<stdio.h>
#include <cstring>
int calc(char str[]) {
    int num = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] == '1') {
            num += 1 << strlen(str) - (i + 1);
        }
    }
    return num;
}
int main() {
    char str[] = "001011";
    cout << calc(str);
}