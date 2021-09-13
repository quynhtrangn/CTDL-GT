#include<iostream>
#include<vector>
using namespace std;

void xuat(int k, int a[]){
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
}

void sinh(int n,int k, int a[]){  //   1 2 3-> 3 4 5    2 3 4-> 1 5 4  2 3 5 -> 2 
    int x=k-1;
    while(a[x]==a[x-1]+1&&x>0)x--;
    if(x<=0&& a[0]==1){
        for(int i=n-k+1;i<=n;i++){
            cout<<i<<" ";
        }
        return;
    } 
    a[x]--;
    int tmp=n+1;
    for(int i=k;i>=x+1;i--){
        a[i]=tmp;
        tmp--;
    }
    xuat(k,a);
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int a[1001];
        int n,k;
        cin>>n>>k;
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        sinh(n,k,a);
        cout<<endl;
    }
}
