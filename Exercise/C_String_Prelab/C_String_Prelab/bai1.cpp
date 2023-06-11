// C_String_Prelab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết hàm void process(const char str[], char outstr[]) loại bỏ các khoảng trắng thừa trong chuỗi sao cho không còn hai khoảng trắng liền kề nhau và không có khoảng trắng nào ở đầu và cuối chuỗi.
/*
-Đầu vào :

Mảng kí tự chứa chuỗi cần loại bỏ khoảng trắng

- Đầu ra :

Kết quả của bài toán được ghi vào chuỗi outstr

- Các thư viện có thể dùng : <iostream>, <cstring>
*/

#include <iostream>
#include<stdio.h>
#include <cstring>
using namespace std;
void process(char str[], char outstr[]) {
	int n = strlen(str);
	int k = 1;
	int i;
	for (; str[0] == ' '; ) {
		for (int i = 0; i < n; ++i) {
			str[i] = str[i + 1];

		}
		n--;
	}
	for (i = 1; i < n; i++) {
		if (str[i] == ' ') {
			if (str[i + 1] == ' ') {
				continue;
			}
		}
		str[k++] = str[i];
	}

	if (str[k - 1] == ' ') {
		k--;
	}
	str[k] = '\0';
	for (int i = 0; i < n; i++) {
		outstr[i] = str[i];
	}
	for (int i = n; i < strlen(outstr); i++) {
		outstr[i] = '\0';
	}
}

int main()
{
	const int MAX_SIZE = 100;
	char str[] = "  abc  def  ghi  ";
	char outstr[MAX_SIZE];
	process(str, outstr);
	cout << outstr;
	cout << str;

}
	
