#include <bits/stdc++.h>
using namespace std;
int weight(char c)
{
    switch (c)
    {
    case 'M':
        return 1000;
    case 'D':
        return 500;
    case 'C':
        return 100;
    case 'L':
        return 50;
    case 'X':
        return 10;
    case 'V':
        return 5;
    case 'I':
        return 1;
    default:
        return 0;
    }
}
int RomanToInt(string rom)
{
    int n = rom.length();
    int ans = 0;
    int previous = 0;
    for (int i = (n - 1); i >= 0; i--)
    {
        char x = rom[i];
        if (weight(x) >= previous)
        {
            ans = ans + weight(x);
        }
        else
        {
            ans = ans - weight(x);
        }
        previous = weight(x);
    }
    cout<<"\n"<<ans;
    return 0;
}
int main()
{
    string rom;
    cin >> rom;
    RomanToInt(rom);
    return 0;
}