#include <iostream>

using namespace std;

int main()
{
  int n,k,l,r;cin>>n>>k>>l>>r;
  long long st,sk,sum;cin>>st>>sk;

  if(sk%k==0&&sk!=st){
    for(int i=0;i<k;i++)
        cout<<sk/k<<" ";
    n-=k;st-=sk;
  }
  else if(sk%k!=0&&st!=sk){
    sum=sk%k;
    for(int i=0;i<k;i++){
        if(i<sum)cout<<(sk/k)+1<<" ";
        else
            cout<<sk/k<<" ";
    }
    n-=k;st-=sk;
  }
 // cout<<st<<" "<<n<<endl;;

  if(st%n==0){
    for(int i=0;i<n;i++)
        cout<<st/n<<" ";
    return 0;
  }
  else if(st%n!=0){
    sum=st%n;
    for(int i=0;i<n;i++){
        if(i<sum)cout<<st/n+1<<" ";
        else
            cout<<st/n<<" ";
    }
      return 0;
  }



}
