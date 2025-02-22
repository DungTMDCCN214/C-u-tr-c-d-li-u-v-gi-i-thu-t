#include<bits/stdc++.h>

using namespace std;
int n,k,check,a[100];
void khoitao() {
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}

void sinh() {
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) check=0;
	else {
		a[i]=1;
	}
}
int kt(int a[]){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) cnt++;
	}
	if(cnt==k) return 1;
	return 0;
} 
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>k;
		check=1;
		khoitao();
		int b[100][100];
		while(check!=0){
			if(kt(a)){
				in();
			}
			sinh();
		}
	}
	return 0;
}

