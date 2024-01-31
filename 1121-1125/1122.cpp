#include<bits/stdc++.h>
using namespace std;

// 2

int main()
{
    unordered_map<int,int> K;
    int N, x;
    cin >> N;
    while(N--){
        cin >> x;
        K[x]++;
    }
    for(auto i : K){
        if(i.first % 2 && i.second % 2){
            cout << i.first << endl;
            return 0;
        }
    }
    return 0;
}