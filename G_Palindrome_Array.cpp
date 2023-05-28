#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 1;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            flag = 0;
            break;
        }
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}