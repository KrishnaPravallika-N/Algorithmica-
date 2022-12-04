#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,a1,a2,a3;
    cin>>a;
    int i = 0.04;
    a1 = a + a*0.04;
    a2 = a1 + a1*0.04;
    a3 = a2 + a2*0.04;
    printf("%.2f ",a1);
    printf("%.2f ",a2);
    printf("%.2f ",a3);
}