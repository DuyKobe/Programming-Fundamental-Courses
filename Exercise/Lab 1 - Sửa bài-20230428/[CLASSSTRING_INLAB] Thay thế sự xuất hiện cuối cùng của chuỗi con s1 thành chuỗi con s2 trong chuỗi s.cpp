void replaceString(string s, string s1, string s2) 
{
    int cur = 0; // The position of s1

    // Skip the first position, only get the last position of s1
    while (true) 
    {
        int temp = s.find(s1, cur);
        if (temp < s.length()) 
        {
            cur = temp + 1;
        }
        else break;
    }

    // Cur is now in the last position of s1
    // Then replace the string
    if (cur != 0) 
        s.replace(cur - 1, s1.length(), s2);
    
    cout << s;
}
