#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int n,sum = 0,t1,t2,t3,t4;
    cin>>n;
    t1 = n%10;
    sum = sum + t1;
    n = n/10;
    t2 = n%10;
    sum = sum + t2;
    n = n/10;
    t3 = n%10;
    sum = sum + t3;
    n = n/10;
    t4 = n%10;
    sum = sum + t4;
    n = n/10;
    
    cout<<sum;
}
