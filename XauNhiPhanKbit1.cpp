#include<iostream>
#include<vector>
using namespace std;

void xuat(int n, int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
int check(int n,int k,int a[]){
	int dem=0;
    for(int i=0;i<n;i++){
    	if(a[i]==1) dem++;
    	//if(dem>k) return 0;
	}
	if(dem==k) return 1;
	return 0;
}
void sinh(int n,int x, int a[]){
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int k=n-1;
    while(1){
        if(check(n,x,a)==1){
        	xuat(n,a);
		}
        k=n-1;
        while(a[k]==1&&k>=0) k--;
        if(k<0) break;
        a[k]=1;
        for(int i=k+1;i<n;i++){
            a[i]=0;
        }
        
    }
    
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int a[100];
        int n,k;
        cin>>n>>k;
        sinh(n,k,a);
        cout<<endl;
    }
}
    
