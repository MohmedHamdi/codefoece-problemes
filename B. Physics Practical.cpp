#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int bin(int arr[], int t, int x) {
    int l = 0, r = t - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] <= x)ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }
    return ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    int a[100000], min1 = 999999, sum = 0,x,x1;

    map<int, int>frq;
    for (int i = 0; i < t; i++) {
        cin >> a[i];
       frq[a[i]]++;

    }
    sort(a, a + t);
    for (int i = 0; i < t;) {
        x = 2 * a[i];
        x1 = bin(a, t, x);

        sum = t - ((x1 + 1) - i);
        if (min1 > sum)min1 = sum;
        sum = 0; i += frq[a[i]];

    }

    cout << min1 << endl;





}
