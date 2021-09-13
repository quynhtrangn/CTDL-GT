#include<bits/stdc++.h>
using namespace std;
void xuat(int k, int a[]){
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int check(int n, int a[], int b[]){
	for(int j=0;j<n;j++){
		if(b[j]!=a[j]) return 1;
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int buoc=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[j]=a[j];
		}
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
		
		if(check(n,a,b)==1){
			cout<<"Buoc "<<buoc<<": ";
			xuat(n,a);
			buoc++;
		}
		
	}
 	return 0;
}

