#include<bits/stdc++.h>
using namespace std;
#define Mod (int)(1e9+7)
long long F[10000];
void Fibo(){
    F[1]=1;
    F[2]=1;
    for(int i=3;i<95;i++) F[i]=F[i-2]+F[i-1];
}
int Try(long long n,long long k){
    if(n==1) return 0;
    if(n==2) return 1;
    if(k<=F[n-2]) return Try(n-2,k);
    else return Try(n-1, k-F[n-2]);

}
void run(){
    long long n,k;
    cin>>n>>k;
    cout<<Try(n,k);
}
int main()
{
    Fibo();
	int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}

