#include<bits/stdc++.h>
using namespace std;
#define Mod (int)(1e9+7)
long long F[10000];
struct cap{
    int bi;
    int en;
};
bool cmp(cap a, cap b){
    return a.bi<b.bi;
}
void run(){
    int n;
    cin>>n;
    cap a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i].bi;
        cin>>a[i].en;
    }
    sort(a,a+n,cmp);
    int dd[100]={0};
    for(int i=0;i<n;i++){
        dd[i]=1;
        for(int j=0;j<i;j++){
            if(a[j].en<a[i].bi) dd[i]=max(dd[j],dd[j]+1);
        }
    }
    cout<<dd[n-1];

}
int main()
{
	int T;
    cin>>T;
    while(T--){
        run();
        cout<<endl;
    }
}

