#include <iostream>
using namespace std;
 
int main()
{
  int t,n,count;
  cin>>t;
  while(t--){
  count=0;
  cin>>n;
  while(n>=5){
  count += n/5;
  n /= 5;
  }
  cout<<count<<endl;
 }
}
