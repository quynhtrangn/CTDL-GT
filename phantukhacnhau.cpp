#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
void run(){
    cin>>n;
    long long *a= new long long[n+1];
    long long *b= new long long [n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) cin>>b[i];
    int index=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            index=i;
            break;
        }
    }
    if(index==-1) cout<< n;
    else{
        cout<< index+1;
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

