//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[1000];
//void handle(){
//    cin>>n;
//    for (int i = 0;i<n;i++){
//        cin>>a[i];
//    }
//    int b[1000]={0};
//    int res=0;
//    for (int i=0;i<n;i++){
//        b[i]=1;
//        for (int j =0;j<i;j++){
//            if (a[j]<=a[i]) b[i]=max(b[i],b[j]+1);
//            res=max(res,b[i]);
//        }
//    }
//    cout<<n-res;
//}
//int main (){
//    int T;
//    cin >>T;
//    while (T--){
//        handle();
//        cout<<endl;
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
int b[1000];
void sobuoc(){
    cin>>n;
    int dem=0;
    for(int i = 0;i<n;i++){
        b[i]=0;
    }
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=1;
        for (int j=0;j<i;j++){
            if (a[i]>=a[j]){
            	b[i]=max(b[i],b[j]+1);
			} 
            dem=max(dem,b[i]);
        }
    }
    cout<<n-dem<<endl;
}
void run(){
	int T;
    cin>>T;
    while (T--){
        sobuoc();
    }
}
int main (){
    run();
    return 0;
}
