#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        deque<char>s;

        string a,b,a1;cin>>a;
        a1=a;
        int n,sum=0,m=0,c=a.size();cin>>n;
        for(int i=0;i<c;i++){
            sum+=a[i]-'0';

        }
        if(sum<=n)cout<<0<<endl;
        else {
            for(int i=a.size()-1;i>=0;i--){
                    sum-=a[i]-'0';
            a[i]='0';
            if(i>0&&a[i-1]!='9')
            a[i-1]++,sum++;
            else if(a[i-1]=='9'){
                for(int k=i-1;k>=0;k--){
                    if(a[k]=='9')sum-=9,a[k]='0';
                    else{
                        a[k]++;sum++;break;
                    }
                }
            }

            if(sum<=n)break;


            }
            if(a[0]=='0')b+='1';
            b+=a;


unsigned long long x,y;
       stringstream s1,s2;

       s1<<a1;s1>>x;
       s2<<b;s2>>y;
      // cout<<b<<endl;
        cout<<y-x<<endl;}s.clear();b.clear();sum=0;m=0;
       //cout<<a<<endl;}
    }
}
