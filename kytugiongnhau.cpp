#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
void run(){
    cin>>n>>x>>y>>z;
    int a[n+1];
    for(int i=0;i<n;i++) a[i]=0;
    a[0]=0;
    a[1]=x;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            a[i]=min(a[i-1]+x,a[i/2]+z);  
        }
        else{
            a[i]=min(a[i-1]+x,(a[(i+1)/2]+z)+y);     
        }
    }
    cout<<a[n];
}
int main()
{
	int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}

