#include<bits/stdc++.h>
using namespace std;
long long n,x,y,z;
#define Mod (int)(1e9+7)
long long pow(long long k){
    long long res =1;
    long long i;
    while(k>0){
        if(k%2!=0)  res=res*i;
        k/=2;
        i=i*i;
    }
    return res;
}
void run(){
    cin>>n>>x;
    long long mu1 = pow(n-1);
    long long mu2 = pow(n);
    if(x>mu1) x=mu2-x;
    while(mu1>0){
        if(x==1){
            cout<<1; break;
        }
        else if(x==mu1){
            cout<<n; break;
        }
        else{
            mu1/=2;
            n--;
        }
        if(x>mu1) x=2*mu1-x;
    }

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

