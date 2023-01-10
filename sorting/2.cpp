#include <bits/stdc++.h>
using namespace std;
void sortStrings(string &s){
    sort(s.begin(), s.end(), greater<char>());
}
int main(){
    string s;
    cin>>s;
    sortStrings(s);
    for(int i = 0; i <  s.size(); i++)cout << s[i];
}
