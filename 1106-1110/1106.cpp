#include<bits/stdc++.h>
using namespace std;

// 6

int main()
{
    int N;
    cin >> N;
    vector<int> H{2,0,1,9};
    int ans = 2+0+1+9;
    for(int i=4; i<N; i++){
        H.push_back(ans % 10);
        ans -= H[i-4];
        ans += H.back();
    }
    for(int i=0; i<N-1; i++)
        cout << H[i];
    cout << H.back();
}