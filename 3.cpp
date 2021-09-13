#include<bits/stdc++.h>
using namespace std;

void xuat(int i, int n, int a[]){
    cout<<"Buoc "<<i<<": ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sxchon(int n, int a[]){

    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[index]){
                index=j;
            }
        }
        swap(a[i],a[index]);
        xuat(i+1,n,a);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sxchon(n,a);

}