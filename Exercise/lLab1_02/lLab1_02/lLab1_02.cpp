// Student may implement another function as need
#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
void process(const char *str, char *outstr);
void process(const char *str, char *outstr) {
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        outstr[i] = str[n - 1 - i];
    }
    outstr[n] = '\0';
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "this is my school";
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
}