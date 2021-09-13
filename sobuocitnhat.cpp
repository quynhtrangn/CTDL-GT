#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
#define Mod (int)(1e9+7)
void run(){
    cin>>n;
    int a[n+5];
    int b[n+5]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int res=0;
    for(int i=1;i<=n;i++){
        b[i]=1;
        for(int j=0;j<i;j++){
            if(a[j]<=a[i]) b[i]= max(b[i],b[j]+1);
            res= max(res, b[i]);
        }
    }
    cout<<n-res;
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

