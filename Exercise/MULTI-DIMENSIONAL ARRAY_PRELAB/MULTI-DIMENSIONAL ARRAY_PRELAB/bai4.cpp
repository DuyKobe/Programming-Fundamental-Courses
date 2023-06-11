#include <iostream>
using namespace std;
/*
int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
	int i, j, s = 0;

	for (i = x; i >= 0; i--) {
		s = s + (arr[i][y - (x - i)] - arr[i][y + (x - i)]);
	}
	for (j = x; j < row; j++) {
		s = s + (arr[j][y + (j - x)] - arr[j][y - (j - x)]);
	}

	if (s >= 0) return s;
	else return s * (-1);
}
*/
int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
	int sum1 = 0;
	int sum2 = 0;

	// tính tổng các phần tử trên đường chéo chính và đường chéo phụ
	for (int i = 0; i < min(row, col); i++) {
		sum1 += arr[i][i];
		sum2 += arr[i][col - i - 1];
	}

	// trừ hai tổng và trả về giá trị tuyệt đối của hiệu đó
	return abs(sum1 - sum2);
}

int main() {
	int arr[][1000] = { {88,72,65,37},{82,84,34,12},{74,46,88,44} };
	cout << diagonalDiff(arr, 3, 4, 1, 0);
}