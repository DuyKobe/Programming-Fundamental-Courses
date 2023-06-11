
/*#include <iostream>
#include <fstream>
#include <string>

using namespace std;
*/
/*
Viết hàm bằng C++: void threeChars(string fileName) đọc vào các hàng từ một file có đuôi txt, mỗi hàng chứa một chuỗi có 3 kí tự.Xác định xem 3 ký tự trên mỗi hàng có đúng thứ tự bảng chữ cái(ASCII) hay không, nếu đúng xuất ra "true", ngược lại xuất ra "false".Chương trình sẽ lặp cho đến khi 3 ký tự đọc vào là "***".
Đầu vào :
Biến fileName là tên file chứa dữ liệu cần đọc vào.
Đầu ra :
"true" hoặc "false", theo sau bởi dấu xuống dòng, trừ trường hợp đọc vào "***" thì kết thúc chương trình.
*/
/*
void threeChars(string fileName) {
    string line;
    ifstream file(fileName);//

    while (getline(file, line)) {
        // Kiem tra xem 3 ky tu tren moi hang co dung thu tu bang chu cai hay khong
        bool test = true;
        if (line == "***") {// Thoat khoi vong lap khi doc vao chuoi "***"
            break;
        }

        for (int i = 0; i < line.length() - 2; i++) {
            if (line[i] > line[i + 1]) {
                test = false;
                break;
            }
        }

        // Xuat ket qua
        if (test) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }

        
    }

    file.close();
}
 int main() {
    string fileName;
    cout << "Nhap ten file: ";
    getline(cin, fileName);//nhập chép hết dữ liệu từ stdin vào biến fileName

    threeChars(fileName);
        return 0;
}
"true" hoặc "false", theo sau bởi dấu xuống dòng, trừ trường hợp đọc vào "***" thì kết thúc chương trình.
*/