#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    vector<long long> H;
    while(cin >> x >> y){
        if(y != 0){
            H.push_back(x*y);
            H.push_back(y-1);
        }
    }
    if(H.size() > 0){
        for(int i=0; i<H.size()-1; i++)
            cout << H[i] << " ";
        cout << H.back() << endl; 
    }else
        cout << "0 0";

}