#include<bits/stdc++.h>
using namespace std;
const long long e = 1e9+7;
long long Pow(long long a, long long b){
    if(b == 0) return 1;
    long long tmp = Pow(a, b/2);
    if(b%2==0) return (tmp%e*tmp%e)%e;
    return ((tmp%e*tmp%e)%e*a%e)%e;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		long x,y;
		cin>>x>>y;
		cout<<Pow(x,y)<<endl;
	}
 	return 0;
}

