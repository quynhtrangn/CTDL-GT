#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
void run(){
    cin>>n;
    int *a= new int[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int i=1, j=n/2+1;
    int sum=0;
    while(i<=n/2&&j<=n){
        if(2*a[i]<=a[j]){
            sum++;
            i++;
            j++;
        }
        else{
            j++;
            sum++;
        }
    }
    cout<<sum+(n/2)-i+1+n-j+1;
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

