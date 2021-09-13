#include<bits/stdc++.h>
using namespace std;
#define INF (int)(1e5)
struct data{
    int distance, next;
};
data matrix[15][15];
int a[15][15];
int n = 6;
 
void print(int k){
    cout << "k = " << k <<endl;
    for(int i=1;i<=n;i++){
        cout << "| ";
        for(int j=1;j<=n;j++){
            if(matrix[i][j].distance == INF) cout << "∞";
            else cout << matrix[i][j].distance;
            cout << ",";
            if(matrix[i][j].next == -1) cout << "null";
            else cout << matrix[i][j].next;
            cout << " | ";
        }
        cout << endl;
    } 
    cout << endl;
}
 
int main(){
 
 
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            cin >> a[i][j];
            if(a[i][j] == -1) 
                a[i][j] = INF;
        }
    }
 
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            matrix[i][j].distance = a[i][j];
            if(a[i][j] != INF) 
                matrix[i][j].next = j; 
            else matrix[i][j].next = -1;
        }
    }
 
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(matrix[i][j].distance > matrix[i][k].distance + matrix[k][j].distance ){
                    matrix[i][j].distance = matrix[i][k].distance + matrix[k][j].distance;
                    matrix[i][j].next = matrix[i][k].next; 
                }
            }
        }    
        print(k);
    }
 
    return 0;
}
