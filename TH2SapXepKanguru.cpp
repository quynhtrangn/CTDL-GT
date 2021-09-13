#include<bits/stdc++.h>
using namespace std;

void handle(){
	int n;
	cin>>n;
	int i=1,j=n/2+1;
    int d=0;
    int *a = new int [n+1];
    for (int i =1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    while(i<=n/2 && j<=n){
        if(a[i]*2<=a[j]){
            i++;  j++;  d++;
        }
        else{
            j++; d++;
        }
    }
    cout<<d+(n/2)-i+1+n-j+1<<endl;
}
void run(){
	int T;
    cin>>T;
    while (T--){
		handle();
	}
}
int main (){
    run();
    return 0;
}
