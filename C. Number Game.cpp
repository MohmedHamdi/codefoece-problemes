#include <bits/stdc++.h>

using namespace std;
bool prim(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) {
            return false; break;
        }
    return true;

}
int main()
{
    //  cout << log2(256) << endl;
     // cout<<pow(2,8);
    int t; cin >> t;
    while (t--)
    {
        long long n, po, lo, m, pr; cin >> n;
        lo = log2(n);
        po = pow(2, lo);
        if (n == 1)
            cout << "FastestFinger" << endl;
        else if (n % 2 == 1 || n == 2)
            cout << "Ashishgup" << endl;
        else if (n % 2 == 0 && po == n)
            cout << "FastestFinger" << endl;
        else
        {
            m = n / 2;
            pr = prim(m);
            if (pr)cout << "FastestFinger" << endl;
            else
                cout << "Ashishgup" << endl;


        }
    }
}