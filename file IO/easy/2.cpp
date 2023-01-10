#include <iostream>
#include <fstream>
using namespace std;

void numberLines(string in_name, string out_name) {
	ifstream fin(in_name);
	ofstream fout(out_name);
	string line;
	int count = 1;
	while(getline(fin, line)) {
		fout<<count<<": "<<line<<"\n";
		count++;
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	cin >> out_name;
	numberLines(in_name, out_name);
}
