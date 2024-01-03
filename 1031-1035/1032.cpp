#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, MAX = -1,x,y, MAX_n = 0;
    cin >> N;
    vector<int> H(N+1, 0);
    while(N--){
        cin >> x >> y;
        H[x] += y;
        if(MAX < H[x]){
            MAX = H[x];
            MAX_n = x;
        }
    }
    cout << MAX_n << " " << MAX << endl;
}