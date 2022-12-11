#include<bits/stdc++.h>
using namespace std;
int main(){
    string bin;
    cin >> bin;
    int l,sum=0,p=0;
    l=bin.length(); 
    for(int i=l-1;i>=0;i--){
        if(bin[i]=='1'){
            sum += pow(2,p); 
        }
        p++;
    }
    cout << "decimal number is " << sum << endl;
}
