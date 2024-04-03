#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;
    int a, b;
    pair<string, int> x, y;
    x.second = 0;
    y.second = 0;
    for(int i=0; i<N; i++){
        cin >> s >> a >> b;
        if(x.second < b)
            x = {s, b};
        if(y.second < a*b)
            y = {s, a*b};
    }
    cout << x.first << " " << x.second << endl << y.first << " " << y.second;
}