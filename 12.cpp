#include<iostream>
#include<vector>
using namespace std;

void xuat(int k, int a[]){
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
}
int check(string a){
    int dem=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'){
            dem++;
        }
    }
    if(dem==a.length()) return 1;
    return 0;

}
void sinh(int n,int k, int a[]){
    int x=k-1;
    while(a[x]==n-k+x+1&&x>=0)x--;
    if(x<0){
        for(int i=0;i<k;i++){
            cout<<i+1<<" ";
        }
        return;
    } 
    a[x]++;
    for(int i=x+1;i<k;i++){
        a[i]=a[i-1]+1;
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
