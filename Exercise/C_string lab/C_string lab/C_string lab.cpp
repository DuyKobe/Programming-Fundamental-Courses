// C_string lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Viết hàm bằng ngôn ngữ C++ void process(const char str[], char outstr[]) chuẩn hóa tên người (tên tiếng Anh). Quy tắc chuẩn hóa như sau:

1. Chữ cái đầu tiên của mỗi từ phải ghi hoa, các chữ cái còn lại ghi thường.

2. Tên người chỉ bao gồm những ký tự trong bảng chữ cái alphabet tiếng Anh.

3. Không có các khoảng trắng thừa. Cụ thể, không có 2 khoảng trắng liền kề nhau và không có khoảng trắng nào ở đầu và cuối chuỗi.
- Đầu vào:
Mảng kí tự chứa chuỗi cần chuẩn hóa
- Đầu ra:
Tên người đã được chuẩn hóa được ghi vào chuỗi outstr*/
/*
#include <iostream>
#include <cstring>
using namespace std;
void process(const char str[], char outstr[]) {
    // Khởi tạo biến đếm để xác định vị trí của ký tự trong chuỗi outstr
    int outstr_idx = 0;
    int len = strlen(str);

    // Khởi tạo biến để xác định trạng thái hiện tại của chuỗi (trong từ hay ngoài từ)
    bool inside_word = false;
   
    if (str[0] == ' ') {
    }
    if (str[0] >= 'A' && str[0] <= 'Z') {
        outstr[outstr_idx] = str[0];
        outstr_idx++;
    }
    if (str[0] >= 'a' && str[0] <= 'z') {
        outstr[outstr_idx] = str[0] - 32;
        outstr_idx++;
    }
    // Lặp qua từng ký tự trong chuỗi
        for (int i = 1; i < len; i++) {
            char c = str[i];
        // Nếu ký tự là một ký tự chữ cái
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            //  ký tự trước đó là khoảng trắng
                if (outstr[outstr_idx - 1] == ' ' && (c >= 'a' && c <= 'z')) {
                    //viet hoa 
                    c = c - 32;
            }
                if (outstr[outstr_idx - 1] != ' ' && (c >= 'A' && c <= 'Z')) {
                    c = c + 32;
                }
                // Đánh dấu rằng đang ở trong từ
                inside_word = true;
            
            // Nếu đang ở trong từ, chuyển ký tự thành chữ thường
            
            // Thêm ký tự vào chuỗi outstr
            outstr[outstr_idx] = c;
            outstr_idx++;
        }
        // Nếu ký tự là khoảng trắng
        else if (c == ' ') {
            // Nếu đang ở trong từ, đánh dấu kết thúc từ
            if (inside_word) {
                inside_word = false;
            }
            // Nếu ký tự trước đó không phải là khoảng trắng, thêm khoảng trắng vào chuỗi outstr
            if (outstr_idx > 0 && outstr[outstr_idx - 1] != ' ') {
                outstr[outstr_idx] = ' ';
                outstr_idx++;
            }
            // Nếu ký tự trước đó  khoảng trắng, ko khoảng trắng vào chuỗi outstr
            if ( outstr[outstr_idx - 1] = ' ') {
                continue;
            }
        }
    }

        // Đặt ký tự kết thúc chuỗi

        if (outstr_idx > 0 && outstr[outstr_idx - 1] == ' ') {
            outstr_idx--;
        }
        outstr[outstr_idx] = '\0';

    }
    int main()
    {
        const int MAX_SIZE = 100;
        char str[] = "doAn VAN *(()hau @!#$";
        char outstr[MAX_SIZE];
        process(str, outstr);
        cout << outstr;

    }
   /* int len = strlen(str);
    int outstr_idx = 0;
    bool khoang_trang = true; 
    int j = 0; 
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            if (khoang_trang) { outstr[j++] = c - 32; khoang_trang = false; }

            else { outstr[j++] = c; } khoang_trang = false;
        }   
        else {
            if (!khoang_trang) {
                outstr[j++] = ' ';
                khoang_trang = true;
            }
        }
        if (khoang_trang) {
            j--;
        }
    }
    outstr[j] = '\0';
    for (int i = len; i < strlen(outstr); i++) {
        outstr[i] = '\0';
    }
}


           

int main()
{
    const int MAX_SIZE = 100;
    char str[] = "doAn VAN *(()hau @!#$";
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
 
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*void process(const char str[], char outstr[]) {
    // Khởi tạo biến đếm để xác định vị trí của ký tự trong chuỗi outstr
    int outstr_idx = 0;

    // Khởi tạo biến để xác định trạng thái hiện tại của chuỗi (trong từ hay ngoài từ)
    bool inside_word = false;

    // Lặp qua từng ký tự trong chuỗi
    for (int i = 0; i < std::strlen(str); i++) {
        char c = str[i];

        // Nếu ký tự là một ký tự chữ cái
        if (std::isalpha(c)) {
            // Nếu đây là ký tự đầu tiên trong chuỗi hoặc ký tự trước đó là khoảng trắng
            if (outstr_idx == 0 || outstr[outstr_idx - 1] == ' ') {
                // Chuyển ký tự thành chữ hoa
                c = std::toupper(c);
                // Đánh dấu rằng đang ở trong từ
                inside_word = true;
            }
            // Nếu đang ở trong từ, chuyển ký tự thành chữ thường
            else if (inside_word) {
                c = std::tolower(c);
            }
            // Thêm ký tự vào chuỗi outstr
            outstr[outstr_idx] = c;
            outstr_idx++;
        }
        // Nếu ký tự là khoảng trắng
        else if (c == ' ') {
            // Nếu đang ở trong từ, đánh dấu kết thúc từ
            if (inside_word) {
                inside_word = false;
            }
            // Nếu ký tự trước đó không phải là khoảng trắng, thêm khoảng trắng vào chuỗi outstr
            if (outstr_idx > 0 && outstr[outstr_idx - 1] != ' ') {
                outstr[outstr_idx] = ' ';
                outstr_idx++;
            }
        }
    }

    // Nếu ký tự cuối cùng không phải là khoảng trắng, thêm khoảng trắng vào cuối chuỗi
    if (outstr_idx > 0 && outstr[outstr_idx - 1] != ' ') {
        outstr[outstr_idx] = ' ';
        outstr_idx++;
    }

    // Đặt ký tự kết thúc chuỗi
    outstr[outstr_idx] = '\0';
}
*/
/*
char lowcase(char c)
offfet = 32
if
c + offet
else return c;
bool isvachar(c)
if (

    )
    return true;
return false 
process
 bool flag  true
    space = ''
    dele = '/0'
    while (*str) {
        if  (valid (*str) // *str== SPACE &&!flag)
            *outri = flag ?uppcae(): lower
       oustr++
    }\if (*str == sapce) {
            flag = false
    else if (isvalidchar9*str)
            flag = false
        }
        els if (valid(*))
            fla -= false
            if *)out -a = spca
            *out = del
        ++str
]
*/
