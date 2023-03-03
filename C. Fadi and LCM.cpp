#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a, m = 0, sum = 0, min1 = 99999999999999, m1 = 0, s; cin >> a;
    //cout<<log ;
    vector<unsigned long long>vec;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0 && (a / i) > sqrt(a))
        {
            vec.push_back(i);
            vec.push_back(a / i);
        }
        else if (a % i == 0 && (a / i) <= sqrt(a))

            vec.push_back(i);

    }
    sort(vec.begin(), vec.end());
    if (vec.size() <= 1)
        cout << 1 << " " << a << endl;
    else {
        for (int i = 0; i <= (vec.size()) / 2; i++)
        {
            for (int k = i + 1; k < vec.size(); k++)
            {
                if (vec[k] % vec[i] == 0)
                    sum++;
                else if (((vec[k] * vec[i]) / __gcd(vec[k], vec[i])) == a)
                {
                    m = vec[k];
                    // cout<<vec[k]<<endl;
                    m = vec[k];
                    break;
                }

            }
            //  cout<<m<<endl<<vec[i]<<endl;

            if (sum == vec.size() - 1) {
                cout << 1 << " " << a << endl;
                return 0;
            }
            if (m < min1 && m != 0) {
                min1 = m; m1 = vec[i];
            }
            //  cout<<min1<<endl;

            sum = 0;
        }
        cout << min(m1, min1) << " " << max(m1, min1) << endl;

    }

}