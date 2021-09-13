#include<bits/stdc++.h>
using namespace std;
#define Mod (int)(1e9+7)
long long F[10000];

void run(){
    string a;
    cin>>a;
    int x[a.length()+5];
    if(a[0]=='0'){
        cout<<0<<endl;
    }
    else{
        x[0]=1;
        x[1]=1;
        for(int i=2;i<=a.size();i++){
            x[i]=0;
            if(a[i-1]!='0') x[i]=x[i-1];
            if(a[i-2]=='1'||(a[i-2]=='2'&&a[i-1]<='6'))x[i]+=x[i-2];
        }
        cout<<x[a.length()];
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

