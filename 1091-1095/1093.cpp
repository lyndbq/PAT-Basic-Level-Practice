#include<bits/stdc++.h>
using namespace std;

// 7 20 

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    unordered_set<char> x, y;

    // for(auto i : a)
    //     x.insert(i);
    // for(auto i : b)
    //     y.insert(i);

    // for(auto i : a){
    //     if(y.count(i) == 0)
    //         cout << i;
    // }
    // for(auto i : b){
    //     if(x.count(i) == 0) 
    //         cout << i;
    // }
    for(auto i : a){
        if(!x.count(i)){
            cout << i;
            x.insert(i);
        }
    }
    for(auto i : b){
        if(!x.count(i)){
            cout << i;
            x.insert(i);
        }
    }
}