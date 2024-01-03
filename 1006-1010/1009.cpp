#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    vector<string> H;
    while(cin >> S){
        H.push_back(S);
    }

    for(int i=H.size()-1; i>0; i--)
        cout << H[i] << " ";
    cout << H.front() << endl;
}