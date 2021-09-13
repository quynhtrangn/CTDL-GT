#include<bits/stdc++.h>
using namespace std;
long long n;
long long F[2][2]={}, M[2][2]={};
const long long mod= 1e9+7;
void mul(long long F[2][2],long long M[2][2]){
    long long x=(F[0][0]*M[0][0])%mod+(F[0][1]*M[0][1])%mod;
    long long y=(F[0][0]*M[1][0])%mod+(F[0][1]*M[1][1])%mod;
    long long x=(F[0][0]*M[0][0])%mod+(F[0][1]*M[1][0])%mod;
    long long x=(F[0][0]*M[0][0])%mod+(F[0][1]*M[1][0])%mod;
}
void powz(long long F[2][2],long long n){
    if(n<=1) return;
    powz(F,n/2);
    mul(F,F);
    if(n%2==1) mul(F,M);

}
void run(){
    F[0][0]=F[0][1]=F[1][0]=1;
    F[1][1]=0;
    M[0][0]=M[0][1]=M[1][0]=1;
    M[1][1]=0;
    cin>>n;
    if(n==0) cout<<0;
    else{
        powz(F,n);
        cout<<F[0][0];
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