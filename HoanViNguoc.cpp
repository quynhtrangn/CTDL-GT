#include<bits/stdc++.h>

using namespace std;

void xuat(int k, int a[]){
    for(int i=0;i<k;i++){
        cout<<a[i];
    }
    cout<<" ";
}

bool cmp(int a, int b){
	if(a>b) return true;
	return false;
}
void sinh(int n, int a[]){// 4 3 2 1
	int tmp=n;
	for(int i=0;i<n;i++){
        a[i]=tmp;
        tmp--;
    }
	while(1){
	    int x= n-2;
	    xuat(n,a);
	    while(a[x]<a[x+1]&&x>=0) x--;
	    
	    if(x<0){
	    	return;
		} 
	    int k=n-1;
	    while(a[x]<a[k]) k--;
	    swap(a[x],a[k]);
	    sort(a+x+1, a+n,cmp);
	    
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
