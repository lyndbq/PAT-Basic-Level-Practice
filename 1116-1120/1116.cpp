#include<bits/stdc++.h>
using namespace std;

// 15

int main()
{
    string s;
    cin >> s;
    if(s.size() % 2){
        cout << "Error: " << s.size() << " digit(s)";
        return 0;
    }
    string x = s.substr(s.size()/2), y = s.substr(0, s.size()/2);
    // cout << x.substr(0,x.size()-1) << " " << y.substr(0,y.size()-1) << endl;
    if(x.substr(0,x.size()-1) != y.substr(0,y.size()-1))
        cout << "No: " << x << " - " << y << " != 2";
    else if(x.back() - y.back() != 2)
        cout << "No: " << x << " - " << y << " != 2";
    else
        cout << "Yes: " << x << " - " << y << " = 2";
}