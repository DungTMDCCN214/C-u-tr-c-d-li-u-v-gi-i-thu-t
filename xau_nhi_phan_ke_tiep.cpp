#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int s=a.size() -1;
		while(a[s]=='1'){
			
			a[s]='0';
			s--;
		} 
		if(s>=0){
			a[s]='1';
		}
		for(int i=0;i<a.size();i++){
			cout<<a[i];
		}
		cout<<endl;
	} 
	return 0;
}

