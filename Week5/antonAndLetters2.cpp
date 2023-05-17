#include <iostream>
#include <cstring>
using namespace std;

bool v[26];

int main()
{
    string s;
    getline(cin, s);
    memset(v, false, sizeof(v));
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            v[s[i]-'a'] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
