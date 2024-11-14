#include<bits/stdc++.h>
using namespace std;
const int N=10005;
int n,m,q,opt,x,c,s[N][N],t;
int main() {
	cin>>t;
	while(t--) {
		memset(s,0,sizeof(s));
		cin>>n>>m>>q;
		while(q--) {
			cin>>opt>>x>>c;
			if(opt==0) {
				for(int i=1; i<=n; i++) {
					s[x][i]=c;
				}
			} else {
				for(int i=1; i<=m; i++) {
					s[i][x]=c;
				}
			}
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}

