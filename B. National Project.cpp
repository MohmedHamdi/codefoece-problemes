#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        unsigned long long n, g, b; cin >> n >> g >> b;
        unsigned long long sum = 0, sum2 = 0;
        if (g == b || g > b)cout << n << endl;
        else if (n % 2 == 0 && g >= (n / 2))cout << n << endl;
        else if (n % 2 == 1 && g >= ((n + 1) / 2))cout << n << endl;
        else {
            // 8 3 5
            if (n % 2 == 1)
                sum = (n + 1) / 2;
            else
                sum = (n / 2);//4
            if (sum % g == 0)
                sum2 = (((sum - 1) / g) * b) + sum;
            else
                sum2 = ((sum / g) * b) + sum;

            if (n < sum2)cout << sum2 << endl;
            else
                cout << n << endl;
        }
        sum2 = 0; sum = 0;

    }
}