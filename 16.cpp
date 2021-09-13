#include<bits/stdc++.h>

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
void sinh(int n, int a[]){// 1 2 4 5 3
	for(int i=0;i<n;i++){
        a[i]=i+1;
    }
	while(1){
	    int x= n-2;
	    xuat(n,a);
	    while(a[x]>a[x+1]&&x>=0) x--;
	    
	    if(x<0){
//	    	for(int i=1;i<=n;i++){
//	    		cout<<i<<" ";
//			}
	    	return;
		} 
	    int k=n-1;
	    while(a[x]>a[k]) k--;
	    swap(a[x],a[k]);
	    sort(a+x+1, a+n);
	    
	}
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int a[1001];
        int n;
        cin>>n;
        sinh(n,a);
        cout<<endl;
    }
}
