#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
#define Mod (int)(1e9+7)
void run(){
    cin>>n>>x;
    int a[n+5]={0};
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=min(x,i);j++) {
            a[i]=(a[i]+a[i-j])%(Mod);
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

