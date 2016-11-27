#include<bits/stdc++.h>
using namespace std;

int main() {
long long t,k,i;
cin>>t;
long long a,b;
float p,ans;
loo(i,0,t)
{
    cin>>k>>p;
    b=ceil(k/p); 
    if(b<k+1)
    cout<<b<<endl;
    else
    cout<<b-1<<endl;
}    
    return 0;
}
