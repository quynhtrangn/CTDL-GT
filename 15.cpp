#include<iostream>
#include<vector>
using namespace std;

void xuat(int k, int a[]){
    for(int i=0;i<k;i++){
        cout<<a[i];
    }
    cout<<" ";
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
    for(int i=0;i<k;i++){
        a[i]=i+1;
    }
    while(1){
        int x=k-1;
        xuat(k,a);
        while(a[x]==n-k+x+1&&x>=0)x--;
        if(x<0){
            return;
        } 
        a[x]++;
        for(int i=x+1;i<k;i++){
            a[i]=a[i-1]+1;
        }
        
    }    
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int a[1001];
        int n,k;
        cin>>n>>k;
        sinh(n,k,a);
        cout<<endl;
    }
}
    
