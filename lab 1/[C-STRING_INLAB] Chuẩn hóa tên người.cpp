#include <iostream>
#include <cstring>

using namespace std;

// Check if the character is in the alphabet
bool isValidChar(char c) 
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return true;
    else return false;
}

// Lowercase the character
char lowercase(char c) 
{
    const int OFFSET = 32;
    if (c >= 'A' && c <= 'Z')
        return c + OFFSET;
    else return c;
}

// Lowercase the character
char uppercase(char c) {
    const int OFFSET = 32;
    if (c >= 'a' && c <= 'z')
        return c - OFFSET;
    else return c;
}

// The required function
void process(const char* str, char* outstr) 
{
    // flag: true if the before character is space ' ' 
    // or the current character is not alphabet
    bool flag = true;
    
    const char SPACE = ' ';
    const char DELIM = '\0';
    // Check the first character

    while (*str) 
    {
        if (isValidChar(*str) || *str == SPACE && !flag) 
        {
            *outstr = flag ? uppercase(*str) : lowercase(*str);
            outstr++;
        }
        if (*str == SPACE) 
        {
            flag = true;
        }
        else if (isValidChar(*str)) 
        {
            flag = false;
        }

        str++;
    }

    // Check the last character and add eliminator
    if (*(outstr - 1) == SPACE) 
        *(outstr - 1) = DELIM;
    else
        *outstr = DELIM;
}

int main() 
{
    char str[] = "  rober)(t *Xio*  JAMES B(ON#D  ^&*@ A ";
    char* outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}
