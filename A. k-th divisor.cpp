#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a, b, m = 0;
    cin >> a >> b;
    vector<unsigned long long>vec;
    for (unsigned long long i = 2; i <= sqrt(a); i++) {
        if (a % i == 0 && (a / i) > sqrt(a)) {
            m += 2;
            vec.push_back(i); vec.push_back(a / i);
        }
        else if (a % i == 0 && (a / i) <= sqrt(a)) {
            m++;
            vec.push_back(i);
        }
    }
    vec.push_back(1); vec.push_back(a);
    sort(vec.begin(), vec.end());

    if (m == 0 && b > 2 || a < b)
        cout << -1 << endl;
    else if (m == 0 && b == 1)cout << 1 << endl;
    else if (m == 0 && b == 2)cout << a << endl;
    else if ((m + 2) < b) cout << -1 << endl;
    else cout << vec[b - 1] << endl;

}