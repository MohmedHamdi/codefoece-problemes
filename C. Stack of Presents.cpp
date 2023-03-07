#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
        while(t--){
            int n,m,x,l,g=0;cin>>n>>m;
            long long sum=0;
            int arr[n+1];
            map<int,int>frq;
            for(int i=1;i<=n;i++){
                cin>>arr[i];frq[arr[i]]=i;
            }
            //cin>>m;
            for(int i=0;i<m;i++){
                cin>>x;
                if(i==0){
                  l=frq[x];
                  sum+=(2*(frq[x]-1))+1;sum-=(2*g);g++;
                }
                else if(frq[x]<l&&i>0)
                   { sum++;g++;
                   }
                else if(frq[x]>l){
                   sum+=(2*(frq[x]-1))+1;sum-=2*g;
                   g++;
                     l=frq[x];
                }
            }
            cout<<sum<<endl;
            frq.clear();sum=0;g=0;
        }
}
