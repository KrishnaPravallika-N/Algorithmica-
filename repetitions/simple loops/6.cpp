#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int temp,k,t1,t2;
	cin>>k>>s;
	if(k>0){
		for(int i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] + k;
			if(s[i] > 'z'){
				s[i] = s[i] - 'z' + 'a' - 1;
			}
		}
		
		else if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + k;
            if (s[i] > 'Z'){
               s[i] = s[i] - 'Z' + 'A' - 1;
            }
         }
      }
      cout<<s;
	}
	else if(k<0){
		for(int i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] + k;
			if(s[i] < 'z'){
				s[i] = s[i] -'z' + 'a' - 1;
			}
		}
		
		else if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - k;
            if (s[i] > 'Z'){
               s[i] = s[i] - 'Z' + 'A' - 1;
            }
         }
		}
		cout<<s;
	}
}
