#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n], arr2[n], ar[n], m, m2, arr3[n] = { 0 }, sum3 = 0;
    vector<int>vec;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ar[arr[i]] = i + 1;

    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        m = ar[arr2[i]];
        if (m > i)
            vec.push_back((m - (i + 1)));
        else if (i > m) {
            m2 = (n - i) + m - 1;
            vec.push_back(m2);
        }

    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size() - 1; i++)
    {
        arr3[vec[i]]++;
        // cout<<vec[i]<<endl;
    }
    m2 = sizeof(arr) / sizeof(arr[0]);
    sort(arr3, arr3 + m2);
    if (arr3[m2 - 1] == (n - 1))
        cout << n << endl;
    else
        cout << arr3[m2 - 1] << endl;


}