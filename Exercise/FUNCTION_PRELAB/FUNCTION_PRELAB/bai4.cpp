/*Viết hàm bool completeNum(int N) để kiểm tra xem số nguyên dương N có phải là một số hoàn thiện hay không. N là một số hoàn thiện nếu N bằng tổng tất cả ước số nguyên dương (không bao gồm chính nó) của nó.

Đầu vào: 

int N: số nguyên dương N cần kiểm tra
Đầu ra:

bool: trả về true nếu N là số hoàn thiện, ngược lại trả về false*/
bool completeNum(int N)
{
	int i;
	int s = 0;
	for (i = 1; i < N; i++) {
		if (N % i == 0) {
			s = s + i;
		}

	}
	if (s == N) {
		return true;
	}
	return false;

}