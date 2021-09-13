#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
void run(){
    cin>>n>>x;
    int *a= new int[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int vt= lower_bound(a+1,a+n+1,x)-a;
    if(vt==1){
        if(a[vt]==x) cout<<vt;
        else cout<<-1;
    }
    else{
        if(a[vt]>x) cout<<vt-1;
        else cout<<vt;
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

