#include <bits/stdc++.h>
using namespace std;
string largestPalindrome(string num){
    int freq[10] = {0};
    for(char c:num)freq[c - '0']++;
    string begins = " ", ends = " "; 
    for(int i = 9;i>=0;i--){
        while(freq[i] > 1){
            begins += to_string(i);
            ends += to_string(i);
            freq[i] -= 2;
        }
    }
    for(int i = 9;i>=0;i--){
        if(freq[i]){
            begins += to_string(i);
            break;
        }
    }
    reverse(ends.begin(),ends.end());
    return begins + ends ;
}
int main(){
    string st;
    cin>>st;
    cout<<largestPalindrome(st);
}
