#include<bits/stdc++.h>
using namespace std;

int main() {
long long t,k,i;
cin>>t;
long long a,b;
float p,ans;
for(i=0;i<t;i++)
{
    cin>>k>>p;
    b=ceil(k/p); 
     b=k/p; 
    if( b*(1-p)==b-k&&b!=k)
        cout<<b-1<<endl;
    else
        cout<<b<<endl;
}    
    return 0;
}
