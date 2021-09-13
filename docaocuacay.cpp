//#include<bits/stdc++.h>
//#include<queue>
//#include<vector>
//using namespace std;
//int main(){
//    long long k,i,j,n,m,x,d,t;
//    cin>>t;
//    while(t--){
//     	cin>>n;
//    	d=0;
//    	long long s[n+1];
//    	s[1]=0;
//    	d=0;
//    	for (i=0;i<n-1;i++) {
//    		cin>>m>>k;
//    		s[k]=s[m]+1;
//    		if (s[k]>d) d=s[k];
//    	}
//    	cout<<d<<endl;		
//	}
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
long long n;
void run(){
 	cin>>n;
 	long long a[n+5];
	long long dem=0;
 	a[1]=0;
	for (int i=0;i<n-1;i++) {
		long long u,v;
		cin>>u>>v;
		a[v]=a[u]+1;
    	if (a[v]>dem) dem=a[v];
	}
	cout<<dem;
}
int main(){
    int T;
    cin>>T;
    while(T--){
    	run();
    	cout<<endl;
    }
    return 0;
}

