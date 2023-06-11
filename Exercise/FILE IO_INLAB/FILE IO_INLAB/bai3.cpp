#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/*Viết hàm void process(string fileName) đọc một file đuôi txt, dòng đầu gồm 2 số N và M cách nhau bởi 1 khoảng trắng.

N dòng theo sau, mỗi dòng gồm M số thực cách nhau bởi 1 khoảng trắng.

Trả về giá trị lớn nhất của mỗi dòng và giá trị lớn nhất trong tất cả các số.
Các thư viện đã được include: iostream, fstream, string.

Đầu vào:
Biến "fileName" là tên file chứa dữ liệu đầu vào.

Đầu ra:

Giá trị lớn nhất của mỗi dòng và giá trị lớn nhất của tất cả các số, cách nhau bởi ký tự khoảng trắng.*/
void process(string fileName) {
    ifstream file(fileName);

    int N, M;
    file >> N >> M;

    double maxOverall = -1.0;
    for (int i = 0; i < N; i++) {
        double maxRow = -1.0;
        for (int j = 0; j < M; j++) {
            double num;
            file >> num;
            maxRow = max(maxRow, num);
            maxOverall = max(maxOverall, num);
        }
        cout << maxRow << " ";
    }
    cout << maxOverall << endl;
    file.close();
}

int main() {
    string fileName;
    cout << "Nhap ten file: ";
    getline(cin, fileName);

    process(fileName);

    return 0;
}
