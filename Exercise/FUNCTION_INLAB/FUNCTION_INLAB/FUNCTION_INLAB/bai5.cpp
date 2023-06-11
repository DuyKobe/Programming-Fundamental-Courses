﻿/*
Câu 5:
Cho một số thập phân dương làm đầu vào, chúng ta cần triển khai hàm
long int decimalToBinary(int decimal_number){}
để chuyển đổi số thập phân dương đã cho thành số nhị phân tương đương.
Xin lưu ý rằng bạn không thể sử dụng từ khóa for, while, goto (ngay cả trong tên biến, comment).
Đối với bài tập này, chúng ta có #include <iostream> và sử dụng namespace std;
*/
long int decimalToBinary(int decimal_number)
{
    if (decimal_number == 0) return 0;
    else if (decimal_number == 1) return 1;
    return decimal_number % 2 + 10 * decimalToBinary(decimal_number / 2);
}