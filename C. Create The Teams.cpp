#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long arr[n], k; cin >> k;
        for (int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr + n);
        int l = n - 1, r = 0, sum = 0, m = 0;
        while (l >= 0)
        {
            if (arr[l] >= k && m == 0)
            {
                r++; m = 0;
            }
            else {
                sum++;
                m = 1;
            }
            if (sum * arr[l] >= k && m == 1) { r++; sum = 0; m = 0; }
            l--;
        }
        cout << r << endl; r = 0;
    }
}