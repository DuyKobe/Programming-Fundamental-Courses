#include <iostream>
#include <string>

using namespace std;
/*Viết chương trình đọc vào chuỗi s, tìm tất cả các chuỗi con trong s mà chuỗi con chỉ có duy nhất 1 kí tự (ví dụ : aaaa, bbbb, cc, ...) và trả về độ dài của chuỗi con dài nhất.

Đầu vào:

Chuỗi s có độ dài ngắn nhất là 1.

Đầu ra:

Độ dài của chuỗi con dài nhất mà chỉ có sự xuất hiện của 1 ký tự trong chuỗi con.*/
int main() {
    string s;
    cin >> s; // đọc vào chuỗi s
    int maxLength = 0; // độ dài của chuỗi con dài nhất
    char currentChar = s[0]; // ký tự hiện tại
    int currentLength = 1; // độ dài của chuỗi con hiện tại
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == currentChar) { // nếu ký tự hiện tại trùng với ký tự tiếp theo
            currentLength++; // tăng độ dài của chuỗi con hiện tại
        }
        else { // nếu ký tự hiện tại khác với ký tự tiếp theo
            if (currentLength == 1) { // nếu độ dài của chuỗi con hiện tại là 1
                maxLength = max(maxLength, 1); // cập nhật độ dài của chuỗi con dài nhất
            }
            else { // nếu độ dài của chuỗi con hiện tại lớn hơn 1
                maxLength = max(maxLength, currentLength); // cập nhật độ dài của chuỗi con dài nhất
            }
            currentChar = s[i]; // chuyển sang ký tự tiếp theo
            currentLength = 1; // reset độ dài của chuỗi con hiện tại
        }
    }
    //Cập nhật vị trí trùng cuối
    if (currentLength == 1) { // xét trường hợp cuối cùng
        maxLength = max(maxLength, 1); // cập nhật độ dài của chuỗi con dài nhất
    }
    else {
        maxLength = max(maxLength, currentLength); // cập nhật độ dài của chuỗi con dài nhất
    }
    
    cout << maxLength << endl; // in ra độ dài của chuỗi con dài nhất
    return 0;
}

 