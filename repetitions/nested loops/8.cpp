#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=n;j>i;j--){
			cout<<" ";
		}
		for(int k=0;k<i;k++){
			cout<<" *";
		}
		cout<<"\n";
	}
	for(int i=n-1;i>0;i--){
		cout<<" ";
		for(int j=1;j<=n;j++){
			if(j>=i) cout<<"* ";
			else cout<<" ";
		}
		cout<<"\n";
	}
}
