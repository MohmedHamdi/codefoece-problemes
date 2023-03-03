#include <iostream>

using namespace std;

int main()
{
    int n, m, m1; cin >> n >> m; m1 = m;
    int arr[n] = { 0 }, arr2[n] = { 0 };
    if (m == 0 && n > 1)
        cout << -1 << " " << -1 << endl;
    else if ((n * 9) < m) cout << -1 << " " << -1 << endl;
    else {

        //cout<<" ";
        for (int i = 0; i < n; i++)
        {
            if ((m1 - 1) > 9)
            {
                arr2[i] = 9; m1 -= 9;
            }
            else if ((m1 - 1) <= 9 && i != (n - 1))
            {
                arr2[i] = (m1 - 1); m1 -= (m1 - 1);
            }
            else if ((m1 - 1) <= 9 && i == (n - 1))
            {
                arr2[i] = (m1); break;
            }
            else if (m1 == 1) {
                arr2[n - 1] = 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
            cout << arr2[i]; cout << " ";
        for (int i = 0; i < n; i++)
        {
            if (m > 9)
            {
                arr[i] = 9;
                m -= 9;
            }
            else {
                arr[i] = m; m -= m;
            }
            if (n == 0)break;
        }
        for (int i = 0; i < n; i++)cout << arr[i];
        cout << endl;
    }
}