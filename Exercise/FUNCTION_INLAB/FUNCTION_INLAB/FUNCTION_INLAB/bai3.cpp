#include"bai3.h"
/*
CÂU 3:
Viết hàm để mã hóa và giải mã một đoạn text theo phương pháp Caesar Cipher. Để mã hoá và giải mã một chuỗi ký tự text, ta cần một tham số có giá trị nguyên là shift.
Hàm mã hóa sẽ thay đổi từng chữ cái trong text bằng cách dịch chuyển chữ cái đó sang phải shift lần trong bảng chữ cái.
Ví dụ với shift = 3. Khi đó 'a' được mã hoá thành 'd', 'b' được mã hoá thành 'e',... 'z' được mã hoá thành 'c'
Hàm giải mã sẽ nhận một chuỗi ký tự text và giá trị nguyên shift và giải mã chuỗi ký tự này thành chuỗi ban đầu (tức dịch chuyển từng chữ cái sang trái shift lần trong bảng chữ cái)
Đầu vào:
char* text: chuỗi ký tự cần được mã hoá hoặc giải mã, chỉ bao gồm chữ cái thường và hoa
int shift: giá trị dịch chuyển trong Caesar Cipher
*/
void encrypt(char* text, int shift) {
    shift = shift % (26);// 26 chữ cái
    int len = 0, i;
    while (text[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        if (text[i] >= 65 && text[i] <= 90) {
            if ((text[i] + shift) > 90) {
                text[i] = text[i] + shift - 26;
            }
            else {
                text[i] = text[i] + shift;
            }
        }
        if (text[i] >= 97 && text[i] <= 122) {
            if ((text[i] + shift) > 122) {
                text[i] = text[i] + shift - 26;
            }
            else {
                text[i] = text[i] + shift;
            }
        }
    }
}

void decrypt(char* text, int shift) {
    shift = shift % (26);
    int len = 0, i;
    while (text[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        if (text[i] >= 65 && text[i] <= 90) {
            if (text[i] - shift < 65) {
                text[i] = text[i] + (26 - shift);
            }
            else {
                text[i] = text[i] - shift;
            }
        }
        if (text[i] >= 97 && text[i] <= 122) {
            if (text[i] - shift < 97) {
                text[i] = text[i] + (26 - shift);
            }
            else {
                text[i] = text[i] - shift;
            }

        }
    }
}
