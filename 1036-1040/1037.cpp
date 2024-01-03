#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    int a;
    long long ans = 0;
    char c;
    cin >> a >> c;
    ans += a * 17*29;
    cin >> a >> c;
    ans += a * 29;
    cin >> a;
    ans += a;
    
    return ans;
}

void HS(long long K)
{
    if(K < 0){
        cout << "-";
        K = -K;    
    }

    cout << K / (17*29) << ".";
    K %= 17*29;
    cout << K / 29 << ".";
    K %= 29;
    cout << K << endl;
}

int main()
{
    long long A = solve(), B = solve();
    HS(B-A);
}