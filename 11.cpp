#include<iostream>
#include<vector>
using namespace std;

void xuat(string a){
    for(int i=0;i<a.length();i++){
        cout<<a[i];
    }
    cout<<endl;
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
void sinh(string a){
    if(check(a)==1){
        for(int i=0;i<a.length();i++){
            a[i]='0';
        }
        xuat(a);
        return;
    }
    int k=a.length()-1;
    while(a[k]=='1'&&k>0) k--;
    a[k]='1';
    for(int i=k+1;i<a.length();i++){
        a[i]='0';
    }
    xuat(a);
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string a;
        cin>>a;
        sinh(a);
    }
}
