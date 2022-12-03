#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int n,sum = 0,temp;
    cin>>n;
    while(n>0){
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    cout<<sum;
}