#include <iostream>

using namespace std;

int main()
{
   int t;cin>>t;
   while(t--){
    unsigned long long a,sum=0,n,m=0;
    cin>>a;
    n=a;

    if(a%2==1){a--;}//6

    while(a>0){


        if((a/2)%2==1&&a%2==0){
            sum+=a/2;
            m++;
         a/=2;
         // cout<<a<<endl;

        }
        else if(a==4){
            sum+=3;
            break;
        }
        else
        {

            a--;m++;
            if(m%2==1){
                sum++;
            }

        }
    }
    if(n%2==0)
    cout<<sum<<endl;
   // else if(sum==0)cout<<0<<endl;
    else
        cout<<n-sum<<endl;

    sum=0;m=0;
   }
}
