#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, n1, sum = 0, sum2 = 0; cin >> n >> n1;
    if (n > (n1 + 1)) {
        cout << -1 << endl; return 0;
    }

    if (((n * 2) + 2) < n1)
    {
        cout << -1 << endl; return 0;
    }
    sum = n1 - n;
    string s = "110", s1 = "10", m;
    while (sum2 <= (n + n1)) {
        if (sum > 0) {
            m += s;
            sum--; sum2 += 3;
        }
        else {
            m += s1;
            sum2 += 2;
        }
    }
    if (n > n1) {

        cout << 0;
        for (int i = 0; i < (n + n1) - 1; i++)
            cout << m[i];
        return 0;
    }

    for (int i = 0; i < (n + n1); i++)
        cout << m[i];

}