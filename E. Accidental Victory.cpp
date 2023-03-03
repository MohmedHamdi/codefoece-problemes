#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, l = 0, r = 0, cou = 0; cin >> n;
        long long arr[n];
        unsigned long long sum = 0;
        map<int, unsigned long long>ma;
        vector<long long>vec;
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; vec.push_back(arr[i]);
            if (arr[i] == arr[i - 1] && i > 0)
                cou++;

        }
        if (cou == n - 1) {
            cout << cou + 1 << endl;
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else {
            sort(vec.begin(), vec.end());

            while (r < n - 1) {
                sum += vec[r];

                if (sum < vec[r + 1])
                {
                    l = r + 1; r++;
                }
                else {
                    r++;
                }
            }
            if (l == 0)
            {
                cout << n << endl;
                for (int i = 1; i <= n; i++)
                    cout << i << " ";
                cout << endl;
            }
            else {

                cout << (n - (l)) << endl;
                for (int i = 0; i < n; i++) {
                    if (arr[i] > vec[l - 1])
                        cout << i + 1 << " ";
                }
                cout << endl;
            }
            l = 0; sum = 0; vec.clear(); cou = 0;
        }
    }
}