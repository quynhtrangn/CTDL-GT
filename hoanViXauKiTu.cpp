//#include<bits/stdc++.h>
//using namespace std;
//
//void xuat( int a[], string b){
//    for(int i=0;i<b.length();i++){
//        cout<<b[a[i]-1];
//    }
//    cout<<" ";
//}
//int check(string a){
//    int dem=0;
//    for(int i=0;i<a.length();i++){
//        if(a[i]=='1'){
//            dem++;
//        }
//    }
//    if(dem==a.length()) return 1;
//    return 0;
//
//}
//void sinh( int a[], string b){// 1 2 4 5 3
//	for(int i=0;i<b.length();i++){
//        a[i]=i+1;
//    }
//	while(1){
//	    int x= b.length()-2;
//	    xuat(a,b);
//	    while(a[x]>a[x+1]&&x>=0) x--;
//	    
//	    if(x<0){
////	    	for(int i=1;i<=n;i++){
////	    		cout<<i<<" ";
////			}
//	    	return;
//		} 
//	    int k=b.length()-1;
//	    while(a[x]>a[k]) k--;
//	    swap(a[x],a[k]);
//	    sort(a+x+1, a+b.length());
//	    
//	}
//}
//int main(){
//    int T;
//    cin>>T;
//    while(T--){
//        int a[1001];
//        string b;
//        cin>>b;
//        sinh(a,b);
//        cout<<endl;
//    }
//}
//    



#include<bits/stdc++.h>
using namespace std;
int a[11];
void xuat(string s){
	for(int i=0;i<s.length();i++){
		cout<<s[a[i]-1];
	}
	cout<<" ";
}
void sinh(string s){
	for(int i=0;i<s.length();i++){
		a[i]=i+1;
	}
	int i=s.length()-2;
	while(1){
		xuat(s);
		i=s.length()-2;
		while(a[i]>a[i+1]&&i>=0) i--;
		if(i<0) return;
		int k=s.length()-1;
		while(a[k]<a[i]) k--;
		swap(a[k],a[i]);
		sort(a+i+1,a+s.length());
	}
	
}
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		sinh(s);
		cout<<endl;
	}
}

