#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=0;j<=n;j++){
			if(j>=i) cout<<"* ";
			else cout<<" ";
		}
		cout<<"\n";
	}
	for(int i=n-1;i>=1;i--){
		for(int j=n-1;j>i;j--){
			cout<<" ";
		}
		cout<<" ";
		for(int k=0;k<i;k++){
			cout<<" *";
		}
		cout<<"\n";
	}
}
