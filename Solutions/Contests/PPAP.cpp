#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	long long p,pa,a,x,ans;
	cin>>t;
	while(t--){
		cin>>p>>pa>>a;
		x = min(pa,a);
		ans = min(p/2,x);
		if(ans==x)
			cout<<x<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
