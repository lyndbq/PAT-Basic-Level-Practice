#include<bits/stdc++.h>
using namespace std;

// 4

int main()
{
    string s;
    cin >> s;
    unordered_map<char,int> K;
    for(auto i : s)
        K[i]++;
    char H[] = {'S','t','r','i','n','g'};
    bool ok = true;
    while(ok){
        ok = false;
        for(int i=0; i<6; i++){
            if(K[H[i]] != 0){
                K[H[i]]--;
                cout << H[i];
                ok = true;
            }
        }
    }
}