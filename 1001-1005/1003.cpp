#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int ok = 0, A = 0, B = 0, C = 0;
    string S;
    cin >> S;

    // ok记录的是当前遍历到的关键字,1代表P，2代表A，3代表T
    // 根据ok来记录开头、中间、结尾A的个数

    for(int i=0; i<S.size(); i++){
        if(S[i] == 'P'){
            if(ok == 0)
                ok++;
            else{
                cout << "NO" << endl;
                return ;
            }
        }else if(S[i] == 'T'){
            if(ok == 2)
                ok++;
            else{
                cout << "NO" << endl;
                return ;
            }
        }else if(S[i] == 'A'){
            if(ok == 0)
                A++;
            else if(ok == 1){
                ok++;
                B++;
            }else if(ok == 2)
                B++;
            else
                C++;

        }else{
            cout << "NO" << endl;
            return ;
        }
    }
    if(ok == 3 && A*B == C){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int N;
    cin >> N;
    while(N--)
        solve();
}