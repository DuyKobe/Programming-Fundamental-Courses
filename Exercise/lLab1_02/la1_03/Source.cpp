#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
int calc(const char str[]) {
    int num = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] == '1') {
            num += 1 << strlen(str) - (i + 1);
        }
    }
    return num;
}
int main() {
    char str[] = "001011";
    cout << calc(str);
    
    return 0;
}