#include<bits/stdc++.h>
using namespace std;
long long n,x,y,z;
#define Mod (int)(1e9+7)
void run(){
    cin>>n;
    long long a[n+1];
    a[1]=1;
    int s2=1,s3=1,s5=1;
    for(int i=2;i<=n;i++){
        a[i]= min(min(a[s2]*2,a[s3]*3),a[s5]*5);
        if(a[i]==a[s2]*2) s2++;
        if(a[i]==a[s3]*3) s3++;
        if(a[i]==a[s5]*5) s5++;
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

