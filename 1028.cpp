#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans = 0;
    string MAX_n, MIN_n, x, y,MAX = "1814/09/06", MIN = "2014/09/06";
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        if(y > "2014/09/06" || y < "1814/09/06")
            continue;
        ans++;
        if(MAX < y){
            MAX = y;
            MAX_n = x;
        }
        if(MIN > y){
            MIN = y;
            MIN_n = x;
        }
    }
    if(ans == 0)
        cout << 0 << endl;
    else
        cout << ans << " " << MIN_n << " " << MAX_n << endl;
}