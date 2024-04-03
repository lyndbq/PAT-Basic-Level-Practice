#include<bits/stdc++.h>
using namespace std;

// 4

int main()
{
    string s, k;
    int n;
    cin >> s >> n;
    
    for(int i=s.size()-n; i<s.size(); i++)
        k += s[i];
    for(int i=0; i<s.size()-n; i++)
        k += s[i];
    double b = stoi(s), a = stoi(k);
    printf("%.2lf", a / b);
}