#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int sum;
        long long int minimumValue = INT_MAX;
        int m;
        cin >> m;
        long long int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                long long int result = min(sum, minimumValue);
                minimumValue = result;
            }
        }
        cout << minimumValue << endl;
    }

    return 0;
}