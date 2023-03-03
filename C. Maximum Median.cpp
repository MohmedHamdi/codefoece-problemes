#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; long long k, arr[n], m = (n / 2), l = 0; cin >> k;
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++)cin >> arr[i];
    sort(arr, arr + n);
    sum = arr[m];
    //cout<<sum<<endl;
    if (sum == arr[m + 1] && k == 1) {
        cout << sum << endl; return 0;
    }
    //cout<<arr[m]<<" "<<arr[m+1]<<endl;
    if ((sum + k) <= (arr[m + 1]))
    {
        cout << sum + k << endl; return 0;
    }


    sum += arr[m + 1] - arr[m];
    k -= arr[m + 1] - arr[m];

    for (int i = m + 1; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            l = k / ((i + 1) - m);

            if (l > (arr[i + 1] - arr[i])) {
                sum += arr[i + 1] - arr[i];
                k -= (arr[i + 1] - arr[i]) * (i + 1 - m);

            }
            else {
                sum += l; k -= l;
                cout << sum << endl; return 0;

            }

        }

    }
    //cout<<sum<<endl;
    l = k / (n - m);

    if (l != 0)
        cout << sum + l << endl;
    else
        cout << sum << endl;
}