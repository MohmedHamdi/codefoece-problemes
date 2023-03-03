#include <iostream>

using namespace std;

int main()
{
    long long n, s, m = 0;
    cin >> n >> s;
    if (n > (s / 2) && s % 2 == 1) {
        cout << "No" << endl;
        return 0;
    }
    if (n > (s / 2) && s % 2 == 0) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) {
        cout << s / n << " ";
        m += s / n;
    }
    cout << s - m << endl;
    cout << 1 << endl;
}