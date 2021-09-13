#include<iostream>
#include<vector>
using namespace std;

int n,k,s,kq, a[100];
void back_track(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int dem=0;
			for(int x=1;x<=k;x++){
				dem+=a[x];
			}
			if(dem==s){
				kq++;
			}
		}
		else{
			back_track(i+1);
		}
	}
}
void handle(){
    while(1){
        cin>>n>>k>>s;
        kq=0;
        for(int i=0;i<100;i++){
        	a[i]=0;
		}
		if(n==0&&k==0&&s==0) return;
		back_track(1);
		cout<<kq<<endl;
    }	
}
int main(){
    handle();
}
    
