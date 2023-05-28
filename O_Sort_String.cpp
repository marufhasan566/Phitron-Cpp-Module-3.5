#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count[26] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        count[c - 'a']++;
        // cout << c - 'a' << endl;
        // cout << count[c - 'a'] << endl;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                cout << char(i + 'a');
            }
        }
    }
    return 0;
}

// This solution will not be accepted in online judge but still I am keeping it here for example of my mistake

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // char *s = new char[n];
//     char s[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//     }

//     sort(s, s + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << s[i];
//     }
//     return 0;
// }