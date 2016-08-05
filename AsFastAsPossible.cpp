#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,l,v1,v2,k;
	double ans,z,x;
	cin>>n>>l>>v1>>v2>>k;
	z = ceil(n*1.0/k);
	x = l*((v1+v2)*1.0/(v2-v1+2*z*v1));
	ans = ((l*1.0-x)/v1) + (x/v2);
	printf("%.12lf\n",ans);
	return 0;
}
