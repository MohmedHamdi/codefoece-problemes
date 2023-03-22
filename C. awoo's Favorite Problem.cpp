#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;cin>>t;
   while(t--){
        int g=1;

    int n;cin>>n;
    string a,b,c,d;cin>>a>>b;c=a;d=b;
    sort(c.begin(),c.end());
     sort(d.begin(),d.end());
    //cout<<t<<" g"<<endl;
    if(d!=c)cout<<"No"<<endl;
    else if(a.size()==1&&a==b)cout<<"YES"<<endl;
    else if(a.size()==1) cout<<"No"<<endl;
    else{
    int l=0,r=l,s=0,m=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]&&b[i]=='b'){
            for(int k=i;k<a.size();k++){
                if(a[k]=='c'){
                   s=1;break;
                }
                else if(a[k]==b[i]){
                    a[i]=b[i];a[k]='a';m=1;break;
                }
            }
            if(m==0)  {s=1;break;}
        }
       else if(a[i]!=b[i]&&b[i]=='c'){
            for(int k=i;k<a.size();k++){
                if(a[k]=='a'){
                   s=1;break;
                }
                else if(a[k]==b[i]){
                    a[i]=b[i];a[k]='b';m=1;break;
                }
            }
             if(m==0) {s=1;break;}
        }
    }
    if(s==0&&a==b)cout<<"YES"<<endl;
    else cout<<"No"<<endl;
    m=0;s=0;}
   }
}
