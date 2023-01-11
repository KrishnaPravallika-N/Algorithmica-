#include <bits/stdc++.h>
using namespace std;

void tokenize(string str){
    vector<string> res;
    string delim = "+-/*%)(";
    std::string::size_type beg = 0;
    for (auto end = 0; (end = str.find(delim, end)) != std::string::npos; ++end){
        res.push_back(str.substr(beg, end - beg));
        beg = end + 1;
    }
    res.push_back(str.substr(beg));
    for(int i=0; i < res.size(); i++) cout << res[i] << ' ';
}

int main() {
    string s = "123+32/32(23)";
    tokenize(s);
}
