#include<bits/stdc++.h>
using namespace std;

// 4

int main()
{
    int N;
    cin >> N;
    unordered_set<int> K;
    for(int i=1; i<=N; i++){
        K.insert(i/2 + i/3 + i/5);
    }
    cout << K.size();
}