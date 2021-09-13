//#include<bits/stdc++.h>
//using namespace std;
//void bina_search(int l, int r, int val,int a[]){
//	int mid=(l+r)/2;
//	if(l>r) return;
//	if(a[mid]==val){
//		cout<<mid+1;
//	}
//	if(a[mid]>val) bina_search(l,mid-1,val,a);
//	if(a[mid]<val) bina_search(mid+1,r,val,a);
//	
//}
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--){
//		int n,x;
//		cin>>n>>x;
//		int a[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		int max_val= *max_element(a,a+n);
//		int vtr_max;
//		for(int i=0;i<n;i++){
//			if(a[i]==max_val)  vtr_max=i;
//		}
//		int ok=0;
//		bina_search(0,vtr_max,x,a);
//		bina_search(vtr_max,n,x,a);
//		cout<<endl;
//		
//	}
// 	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
void bina(int a[], int l, int r, int val){
	int mid=(l+r)/2;
	if(l>r) return;
	if(a[mid]==val){
		cout<<mid+1;
	}
	if(a[mid]>val) bina(a,l,mid-1,val);
	if(a[mid]<val) bina(a,mid+1,r,val);
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n, x;
        cin>>n>>x;
        int a[n+1];
        for(int i=0;i<n;i++){
        	cin>>a[i];
		}
		int maxx= *max_element(a,a+n);
		int index;
		for(int i=0;i<n;i++){
        	if(a[i]== maxx){
        		index=maxx;
			}
		}
		bina(a,0,index,x);
		bina(a,index,n,x);
    }
}
