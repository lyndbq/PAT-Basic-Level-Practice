#include<bits/stdc++.h>
using namespace std;

// 6 20

int main()
{
    int N;
    cin >> N;
    string s;
    unordered_set<string> H;
    while(N--){
        cin >> s;
        H.insert(s);
    }

    cin >> N;
    // 记录参加校庆的校友人数
    int ans = 0;
    // x，y记录最年长校友；a，b记录最年长来宾
    string x = "99999999", y, a = "99999999", b;
    for(int i=0; i<N; i++){
        cin >> s;
        // k记录当前人的生日
        string k = s.substr(6, 8);
        // 判断其是否为最年长的参加校庆的人
        if(a > k){
            a = k;
            b = s;
        }
        // 判断是否为校友
        if(!H.count(s))
            continue;

        // 增加参加校庆的校友人数，然后判断其是否为最年长的参加校庆的校友
        ans++;
        if(x > k){
            x = k;
            y = s;
        }
    }

    // 如果参加校庆的校友人数为0，就说明所有人都是来宾，所以我们直接输出b
    if(ans == 0)
        cout << 0 << endl << b;
    else
        cout << ans << endl << y;
}