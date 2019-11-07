#include <bits/stdc++.h>
using namespace std;
char s[1000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		for(int j=0;j<m;j++){
			if(s[j]=='.'){
				if((i +j) & 1) s[j]='W';
				else s[j]='B';
			}

		}
		printf("%s\n",s);

	}
	return 0;
}
