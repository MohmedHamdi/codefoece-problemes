#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,l=0,count1=0;cin>>n;
        unsigned long long k,arr[n],sum=0,max1=0,m,sum3=0;
      //  map<unsigned long long ,unsigned long>vec;
        map<unsigned long long ,unsigned long>frq;
        vector<long long>vec;
//unsigned long long frq[200000+1]={0};
//unsigned long long frq[200000+1]={0};
        cin>>k;
        sum+=k;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==arr[i-1]&&i>0&&arr[i]%k!=0)
                count1++;
                if(arr[i]%k==0)
                    sum3++;
                    frq[arr[i]%k]++;
                    if(frq[arr[i]%k]==1&&arr[i]%k!=0)vec.push_back(arr[i]);
        }
       if(count1==n-1&&arr[0]%k!=0&&k>arr[0]){
          max1=n*k;
          cout<<max1-arr[0]+1<<endl;
          count1=0;
          }


             else if(sum3==n){
          cout<<0<<endl;

          }

       else{
        sort(vec.begin(),vec.end());
       int l=0;
        while(l<vec.size()){
               count1=frq[vec[l]%k];
               sum=k-(vec[l]%k);
               sum+=(count1-1)*k;
               if(sum>max1)max1=sum;
               sum=0;count1=0;l++;
             }





        cout<<max1+1<<endl;}

        max1=0;frq.clear();sum=0;l=0;count1=0;sum3=0;





    }
}
