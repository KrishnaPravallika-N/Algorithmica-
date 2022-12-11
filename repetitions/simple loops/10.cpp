#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int q,r,i;
	cin>>q;
	string result = "";
	string new1;
	while(q != 0){
		r = q%2;
		result = result + to_string(r);
		q = q/2;		
	}
    for(int n = result.length()-1; n >= 0; n--){
        new1.push_back(result[n]);
    }
    cout<<new1;	
}
