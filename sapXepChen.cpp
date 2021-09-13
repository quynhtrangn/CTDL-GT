#include<bits/stdc++.h>
using namespace std;

void xuat(int i, int n, int a[]){
    cout<<"Buoc "<<i<<": ";
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}
void sxchen(int n, int a[]){// 5 7 3 2
	int k, j;
    for(int i=0;i<n;i++){
        k=a[i];
        j=i-1;
        while(j>=0&&a[j]>k){
        	a[j+1]=a[j];
        	j=j-1;
		}
		a[j+1]=k;
		xuat(i,i+1,a);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sxchen(n,a);

}
