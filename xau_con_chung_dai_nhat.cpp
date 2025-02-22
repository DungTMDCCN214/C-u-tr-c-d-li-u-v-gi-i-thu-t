#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
		string X,Y;
		cin>>X>>Y;
		int n=X.size(), m=Y.size();
		int f[n+1][m+1];
		for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++){
				if(i==0 || j==0){
					f[i][j]=0;
				} else {
					if(X[i-1]==Y[j-1]){
						f[i][j]=f[i-1][j-1]+1;
					} else {
						f[i][j]= max(f[i-1][j],f[i][j-1]);
					}
				}
			}
		}
		cout<<f[n][m]<<endl;;
	}
	return 0;
}

