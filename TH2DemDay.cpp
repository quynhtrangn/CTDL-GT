#include<bits/stdc++.h>
using namespace std;
#define mod 123456789;
long long n;
long long poww (long long n){
    if (n==0) return 1;
    else if (n==1) return 2;
    if (n%2==0) {
        long long x = poww(n/2);
        return (x*x)%mod;
    }
    if (n%2!=0){
        long long x = poww(n-1);
        return (x*2)%mod;
    }
}
void handle(){
    cin>>n;
    cout<<poww(n-1)<<endl;
}
int main (){
    int T;
    cin >>T;
    while (T--){
        handle();
    }
}
