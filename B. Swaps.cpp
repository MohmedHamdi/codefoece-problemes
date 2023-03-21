#include <bits/stdc++.h>

using namespace std;

int main()
{
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>vec;
    map<long long,int>frq;
    long long a[n],b[n],cur,nex;
    for(int i=0;i<n;i++){cin>>a[i];frq[a[i]]+=i;}
   // for(int i=0;i<n;i++)cout<<frq[a[i]]<<" ";
    for(int i=0;i<n;i++)
    {
            cin>>b[i];nex=b[i];
            if(i==0){
                for(int k=1;k<b[i];k+=2)
                    vec.push_back((frq[k]));
                cur=b[i];
            }
            if(cur<nex&&i>0){
                for(int k=cur+1;k<=nex-1;k+=2)vec.push_back(i+frq[k]);

              //  cout<<frq[k]<<" "<<k<<endl;}
                cur=nex;
            }

    }
    if(a[0]<b[0]){
        cout<<0<<endl;
    }
    else{


        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;vec.clear();
    }
 }
}
