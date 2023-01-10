#include <bits/stdc++.h>
#include<vector>
using namespace std;
void removeOutliers(vector<int>inp,int n){
    vector<int>b;
    sort(inp.begin(),inp.end());
    for(int z=0;z<inp.size();z++)cout<<inp[z]<<" ";
    cout<<"\n";
    inp.erase(inp.begin(), inp.begin() + n);
    for(int i = 0;i<inp.size()-n;i++)b.push_back(inp[i]);
    for(int z=0;z<b.size();z++)cout<<b[z]<<" ";
    cout<<"\n";
}
int main(){
    vector<int>a{5,6,8,9,7,1,4,3,2};
    int size = sizeof(a)/sizeof(int);
    int x;
    cin>>x;
    removeOutliers(a,x);
}
