#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int s,s1,s2,s3;
    float area;
    cin>>s1>>s2>>s3;
    s = (s1+s2+s3)/2;
    area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
    cout<<area;
}