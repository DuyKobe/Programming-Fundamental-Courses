/*
#include <iostream>
#include <string>

using namespace std;
//hàm void replaceString(string s, string s1, string s2) để in ra chuỗi s sau khi đã thay thế  chuỗi con s1 cuối cùng thành s2 có trong s.
//Nếu không tìm thấy chuỗi s1 thì giữ nguyên chuỗi s và in ra.
void replaceString(string s, string s1, string s2) {
    size_t pos = s.rfind(s1); // tìm vị trí cuối cùng của chuỗi s1 trong chuỗi s
    if (pos != string::npos) { // nếu tìm thấy chuỗi s1
        s.replace(pos, s1.length(), s2); // thay thế chuỗi s1 bằng chuỗi s2
    }
    cout << s << endl; // in ra chuỗi kết quả
}
//Hàm deleteWord(string s, string s1) với chức năng in ra chuỗi s sau khi xóa tất cả các chuỗi s1 có trong s.
void deleteWord(string s, string s1) {
    size_t pos = s.find(s1); // tìm vị trí đầu tiên của chuỗi s1 trong chuỗi s
    while (pos != -1) { // nếu tìm thấy chuỗi s1
        s.erase(pos, s1.length()); // xóa chuỗi s1
        pos = s.find(s1, pos); // tìm vị trí tiếp theo của chuỗi s1 trong chuỗi s
    }
    cout << s << endl; // in ra chuỗi kết quả
}

int main() {
    string s = "Hello world! This is a test string.";
    string s1 = "string";
    string s2 = "sentence";
    replaceString(s, s1, s2);
    deleteWord(s, s1);
    return 0;
}
*/