/*
// MULTI-DIMENSIONAL ARRAY_PRELAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:

int findMaxColumn(int arr[][1000], int row, int col);
Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Tìm chỉ số của cột có tổng tất cả các phần tử lớn nhất.

Lưu ý: Cột đầu tiên được đánh chỉ số 0. Nếu có nhiều hơn một cột có tổng lớn nhất, ta chọn cột có chỉ số lớn nhất.

Ghi chú: (Các) thư viện iostream và climits đã được khai báo, và namespace std đã được sử dụng.*/
/*
#include <iostream>
using namespace std;
int findMaxColumn(int arr[][1000], int row, int col) {
	int i, j;
	int max = -999999999;
	int sothutumax = 0;
	int s = 0;
	for (j = 0; j < col; j++) {
		for (i = 0; i < row; i++) {
			s = s + arr[i][j];
		}
		if (s > max) {
			max = s;
			sothutumax = j;

		}
		s = 0;
	}
	return sothutumax;
}
int main()
{
	int arr[][1000] = { {-92,78,-2,-58,-37},{44,-4,30,-69,22} };
	cout << findMaxColumn(arr, 2, 5);
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
