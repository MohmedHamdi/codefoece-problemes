#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        long long n,s,k;cin>>n>>k;
        vector<long long>vec;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0&&(n/i)>sqrt(n))vec.push_back(i),vec.push_back(n/i);
            else if(n%i==0)vec.push_back(i);
        }
        sort(vec.begin(),vec.end());
        if(vec.size()==1&&vec[0]==1)cout<<n<<endl;
       else if(k>=n)cout<<1<<endl;
       else if(n%k==0)cout<<n/k<<endl;
       else {
        s=lower_bound(vec.begin(),vec.end(),k)-vec.begin();
        cout<<n/vec[s-1]<<endl;
       // cout<<vec[0]<<endl;
       }
       vec.clear();

    }
}
