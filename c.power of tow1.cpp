#include <iostream>
#include<math.h>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    unsigned long long n, k, sum = 0, sum1 = 0, sum2 = 0, lo = 0, po = 0, k2 = 0, sum3 = 0; cin >> n >> k; k2 += k;
    vector<unsigned long long>vec;
    // if n==k then all output will b pow(2,0)
    if (k == n) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        return 0;
    }
    //if k>n then it is impossible
    if (k > n) { cout << "NO" << endl; return 0; }
    if (n % 2 == 1) {
        n--; k--; vec.push_back(1);
    }


    sum = log2(n);//to know tha max num under that achive constr
    sum1 = pow(2, sum);


    vec.push_back(sum1);
    n -= sum1;
    while (n > 0) {
        sum1 = pow(2, sum);
        if (sum1 <= n) {
            vec.push_back(sum1); n -= sum1;
        }
        else if (sum > 0) {
            sum--;
        }
    }
    //for ex:13 will be 1 4 8 vec.size()=3 if k > 3 then its impossible otherwise will be possible
    if (k2 < vec.size()) {
        cout << "NO" << endl; return 0;
    }
    sort(vec.begin(), vec.end());
    if (vec.size() == k2) {
        cout << "YES" << endl;
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }

    else if (vec.size() < k2) {
        for (int i = 0; i < vec.size();) {
            if (vec.size() == k2)break;

            if (vec[i] != 1) {
                vec.push_back(vec[i] / 2);
                vec[i] /= 2;
            }
            else if (vec[i] == 1)i++;

        }
        sort(vec.begin(), vec.end());
        cout << "YES" << endl;
        for (int i = 0; i < k2; i++)
            cout << vec[i] << " ";
    }

}
