#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, g = 0; cin >> t;
	while (t--)
	{
		int n, sum = 0, m = 0; cin >> n;

		vector<string>vec; string a, b;
		map<string, int>frq;
		char c = '0';

		for (int i = 0; i < n; i++)
		{
			cin >> a; frq[a]++;

			vec.push_back(a);
		}
		for (int i = 0; i < n; i++) {
			for (int k = i + 1; k < n; k++) {
				if (vec[i] == vec[k]) {
					b = vec[k];
					for (int i = 0; i < 4; i++) {
						while (true) {
							if (c > '9')break;
							b[i] = c;
							if (frq[b] < 1) {
								frq[b]++; m = 1; break;
							}
							else c++;

						}
						if (m == 1) {
							m = 0; break;
						}
						b = vec[i];
					}
					sum++; vec[k] = b; m = 0;
				}
			}
		}

		cout << sum << endl;
		for (int i = 0; i < n; i++)cout << vec[i] << endl;

		vec.clear();  sum = 0; m = 0; frq.clear();

	}
}