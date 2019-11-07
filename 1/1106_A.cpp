#include<bits/stdc++.h>
using namespace std;
char mat[510][510];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	scanf("%d",&n);

    for(int x=1;x<=n;x++)
	 scanf("%s",mat[x] + 1);
   int count=0;
	 for(int x=2;x<n;x++)
 	 for(int y=2;y<n;y++)
	    if(mat[x][y]=='X' && mat[x-1][y-1]=='X' && mat[x+1][y+1]=='X' &&
		   mat[x+1][y-1]=='X' && mat[x-1][y+1]== 'X'   )
           count ++;

		   printf("%d",count);

	return 0;
}
