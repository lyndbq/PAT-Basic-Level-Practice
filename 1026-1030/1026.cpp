#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int ans = (B-A)/100 + 0.5;

    // cout << ans << endl;

    if(ans / 3600 < 10)
        cout << 0;
    cout << ans / 3600 << ":";
    ans %= 3600;

    if(ans / 60 < 10)
        cout << 0;
    cout << ans / 60 << ":";
    ans %= 60;

    if(ans < 10)
        cout << 0;
    cout << ans;

}