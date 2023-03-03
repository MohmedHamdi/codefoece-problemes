#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    long long k, arr[n + 1], ans, max1 = -9, m = 0, sum = 0;
    cin >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int l = 1, r = 1;
    while (r <= n)
    {
        if (arr[r] > k)
        {
            l++; ans = r - l;
        }

        else if (arr[r] <= k)
        {
            sum += arr[r];
        }
        if (sum > k)
        {
            sum -= arr[l];
            l++;
            ans = r - l + 1;
            m = 1;
        }
        if (r == n && sum <= k) {
            ans = r - l + 1; m = 1;
        }
        if (m == 1 && max1 < ans)
        {
            max1 = ans; m = 0;
        }
        r++;
    }
    cout << max1 << endl;
}