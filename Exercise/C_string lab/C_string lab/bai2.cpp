/*Viết hàm băng ngôn ngữ C++ void printFirstRepeatedWord(const char str[]) in ra từ đầu tiên trong chuỗi bị lặp lại.
- Đầu vào :
Mảng kí tự chứa chuỗi
- Đầu ra :
In ra từ đầu tiên trong chuỗi có lặp lại.Nếu không có từ nào lặp lại thì in ra "No Repetition"
- Chỉ dùng Các thư viện dùng : <iostream>, <cstring>
*/
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
void printFirstRepeatedWord(char str[]) {
    const int MAX_LEN = 1000; // giả sử độ dài tối đa của chuỗi là 1000
    int counts[MAX_LEN] = { 0 }; // khởi tạo mảng đếm
    char word[MAX_LEN] = ""; // chuỗi tạm để lưu từ hiện tại đang xét
    char firstRepeatedWord[MAX_LEN] = ""; // chuỗi để lưu từ đầu tiên được lặp lại
    int i = 0, j = 0;
    int hard(const char* a) {
        int hard = 0;
        while (*a) {
            hard = (hard * 31) + (*a++);
        }
        return hard;
    }
    bool isvalue(char c) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            return true;
        else return false;
    }
    char lowcase(char c) {
        int offset = 32;
        if (c >= 'A' && c <= 'Z') {
            return c += offset;
        }
        else return c;
    }
    while (str[i]) {
        // bỏ qua các ký tự không phải chữ cái
        while (str[i] && !isvalue(str[i])) {
            i++;
        }
        // đọc từ hiện tại
        j = 0;
        while (str[i] && isvalue(str[i])) {
            word[j++] = lowcase(str[i++]);  
        }
        word[j] = '\0';

        if (word[0] != '\0') {
            // tăng đếm cho từ hiện tại
            counts[hard(word)]++;
            // nếu từ đó xuất hiện lần thứ 2, lưu lại và kết thúc vòng lặp
            if (counts[hard(word)] == 2) {
                strcpy(firstRepeatedWord, word);
                break;
            }
        }
    }

    // in kết quả
    if (firstRepeatedWord[0] == '\0') {
        cout << "No Repetition" << endl;
    }
    else {
       cout << firstRepeatedWord << endl;
    }
   
}
*/
/*
char lowcase(char c) {
    int offset = 32;
    if (c >= 'A' && c <= 'Z') {
        return c += offset;
    }
    else return c;
}
void printFirstRepeatedWord(const char str[]) {
    const int MAX_LEN = 1000; // giả sử chiều dài tối đa của chuỗi là 1000
    int count =  0 ; // mảng đếm số lần xuất hiện của các từ
    char temp[MAX_LEN]; // mảng tạm để lưu từ hiện tại
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i <= len; i++) {
        // nếu gặp ký tự khoảng trắng hoặc kết thúc chuỗi
        if (str[i] == ' ' || str[i] == '\0') {
            // đánh dấu kết thúc từ hiện tại
            temp[j] = '\0';
            // nếu từ hiện tại đã xuất hiện trước đó, in ra và kết thúc hàm
        
            if (count > 0) {
                cout << temp << endl;
                return;
            }
            // nếu chưa, tăng số lần xuất hiện của từ hiện tại lên 1
            if (temp[j] == str[i]) {
                count++;

            }
            // chuẩn bị cho từ tiếp theo
            j = 0;

        }
        else {
            // thêm ký tự vào từ hiện tại
            temp[j] = lowcase(str[i]); // chuyển về chữ thường
            j++;
        }
    }
    // nếu không tìm thấy từ lặp lại, in ra "No Repetition"
    cout << "No Repetition" << endl;
}

*/
// hàm băm đơn giản để lấy vị trong mảng đếm

//Trong đó, hàm hash được sử dụng để tính toán vị trí của từ trong mảng đếm dựa trên giá trị của từ.Hàm này đơn giản chỉ sử dụng phép toán nhân và cộng để tính toán một giá trị số nguyên từ một chuỗi ký tự.

//Chú ý rằng hàm trên chưa xử lý trường hợp các từ được viết hoa và thường được coi là khác nhau.Nếu muốn xử lý trường hợp này, ta có thể thêm một bước chuẩn h
void printFirstRepeatedWord(char str[]) {
    char* tokens[100];
    int index = 0;
    char* p = strtok(str, " ");
    while (p != nullptr) {
        tokens[index] = p;
        p = strtok(NULL, " ");//Chỉ dịnh đối số NULL trong hàm strtok để tiếp tục tách chuỗi ban đầu
        index++;
    }
    for (int i = 0; i < index; i++) {
        for (int j = i + 1; j < index; j++) {
            if (!strcmp(tokens[i], tokens[j])) {
                cout << tokens[i];
                return;
            }
        }
    }
    cout << "No Repetition";
}
int main() {
    char str[] = "car taxi bike bike car taxi";
    printFirstRepeatedWord(str);
}