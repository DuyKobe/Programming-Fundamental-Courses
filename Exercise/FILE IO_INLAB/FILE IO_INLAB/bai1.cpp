/*#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
*/
/*Viết hàm bằng C++: void uppercase(string output) để đọc vào chuỗi S từ bàn phím, sau đó chuyển tất các ký tự trong chuỗi S thành ký tự viết HOA và xuất kết quả ra file output. Chú ý: chỉ thay đổi các chữ cái in thường, các kí tự khác sẽ được giữ nguyên.
Đầu vào:
Biến "output" chứa tên file dùng để xuất kết quả.
Đầu ra:
Hàm đọc chuỗi S từ bàn phím và xử lý chuỗi như mô tả. Sau đó ghi chuỗi đã xử lý vào file có tên được chứa trong biến “output” (hàm không trả về kết quả).
*/
/*
void uppercase(string output) {


    string input;
    getline(cin, input);

    // Chuyen tat ca cac ky tu trong chuoi S thanh ky tu in hoa
    for (int i = 0; i < input.length(); i++) {
        if (islower(input[i])) {
            input[i] = toupper(input[i]);
        }
    }

    // Ghi chuoi da xu ly vao file
    ofstream file(output);
    file << input;
    file.close();
}
int main() {
    string output;
    cout << "Nhap ten file output: ";
    getline(cin, output);

    uppercase(output);

    return 0;
}
*/

