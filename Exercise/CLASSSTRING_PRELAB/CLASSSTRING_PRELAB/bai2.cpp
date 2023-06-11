//Hiện thực hàm findAllIndex(string s1, string s2) để in ra tất cả các vị trí xuất hiện của kí tự đầu tiên của chuỗi s2 trong chuỗi s1. 
//Nếu không tìm thấy in ra -1. Các vị trí tìm thấy sẽ cách nhau một khoảng trắng, sau vị trí cuối cùng, không in thêm bất kỳ ký tự nào (kể cả khoảng trắng, dấu xuống hàng)


//Gợi ý : Sử dụng hàm string::find trong thư viện <string>.
#include <iostream>
#include <string>
using namespace std;
/*void findAllIndex(string s1, string s2) {
    int index = 0;
    int pos = s1.find(s2);
    cout << pos;
    while (1) {
        pos = s1.find(s2, pos + s2.length());
        if (pos == -1) {
            return;
        }
        cout << " " << pos;
    }
}
*/

}

int main() {
   string s1 = "hello world";
   string s2 = "l";
    findAllIndex(s1, s2); // output: 2 3 9
    return 0;
}