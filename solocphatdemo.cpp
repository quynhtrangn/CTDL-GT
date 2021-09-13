#include<bits/stdc++.h>
using namespace std;
void xuat(int a[],int n){
    for(int i=1;i<=n;i++){
        if(a[i]==0) cout<<6;
        else cout<<8;
    }
    cout<<' ';
}
void run(){
    int n;
    cin>>n;
    int x= 1<<n;
    cout<<x<<endl;
    int a[20]={0};
    int i=n;
    while(1){
        i=n;
        xuat(a,n);
        while(a[i]==1&&i>0) i--;
        if(i<=0) break;
        a[i]=1;
        for(int j=i+1;j<=n;j++) a[j]=0;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}