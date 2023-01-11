#include <iostream>
#include<map>
#include <fstream>
using namespace std;

void letterFrequency(string in_name) {
	ifstream fin(in_name);
	ofstream fout(in_name);
	string line;
	map<char,int>freq;
	while(getline(fin, line)) {
		for(int i=0;i<line.length();i++){
			if (isalpha(line[i]) && freq.find(toupper(line[i])) == freq.end()) freq.insert(make_pair(toupper(line[i]), 1));
    	}
		for (auto& it : freq) {
            cout << it.first << ' ' << it.second << '\n';
        }
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	letterFrequency(in_name);
}

