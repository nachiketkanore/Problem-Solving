#include<bits/stdc++.h>
using namespace std;

const int N = 17;
int a[1 << N] , st[1 << (N+1)];

void update(int node , int l , int r , int u , int val , bool isXor){
    if(u < l or u >= r) return ;
    if(l + 1 == r) st[node] = val;
    else{
        int mid = (l+r)/2;
        update(2*node + 1, l , mid , u, val , !isXor);
        update(2*node + 2, mid,r,u , val , !isXor);
        if(isXor) st[node] = st[2*node +1 ] ^ st[2*node +2];
        else st[node] = st[2*node +1] | st[2*node + 2];
    }
}

int main(){
    int n ,m;   cin >> n >> m;
    for(int x=0;x<(1 << n) ; x++){
        int val;    cin >> val;
        update(0, 0 ,1 << n , x, val , n % 2== 0);
    }

    for(int x=0;x<m;x++){
        int ind , v;    cin >> ind >>v;
        ind--;
        update(0,0,1 << n ,ind , v , n % 2 == 0);
        cout << st[0] << endl;
    }



    return 0;
}