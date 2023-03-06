#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        vector<int>vec;string a;cin>>a;
        for(int i=0;i<a.size();i++){
            if(a[i]=='o'&&a[i+1]=='n'&&a[i+2]=='e'&&a[i+3]!='e')
               {vec.push_back(i+2+1);

               }

             else if(a[i]=='o'&&a[i+1]=='n'&&a[i+2]=='e'&&a[i+3]=='e')
                  {vec.push_back(i+1+1);
                  }
                  else if(a[i]=='t'&&a[i+1]=='w'&&a[i+2]=='o'&&a[i+3]=='n'&&a[i+4]=='e')
               {

               vec.push_back(i+2+1);
               i+=3;
               }
             else if(a[i]=='t'&&a[i+1]=='w'&&a[i+2]=='o'&&a[i+3]!='o')
               {

               vec.push_back(i+2+1);
               }
             else if(a[i]=='t'&&a[i+1]=='w'&&a[i+2]=='o'&&a[i+3]=='o')
                  {vec.push_back(i+1+1);
                  }
        }
        if(vec.size()<1)cout<<0<<endl<<endl;
        else{
            cout<<vec.size()<<endl;
            for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
            cout<<endl;
        }
        vec.clear();
    }
}
