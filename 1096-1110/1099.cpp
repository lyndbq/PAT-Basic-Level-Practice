#include<bits/stdc++.h>
using namespace std;

// 判断是否为素数
bool J_Prime(int x)
{
    if(x <= 3)
        return false;
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int J_Prime_Six(int x)
{
    while(1){
        if(J_Prime(x) && (J_Prime(x-6) || J_Prime(x+6))){
            return x;
        }
        x++;
    }
    
}

int main()
{
    int N;
    cin >> N;

    if(J_Prime(N)){
        if(J_Prime(N-6))
            cout << "Yes" << endl << N-6;
        else if(J_Prime(N+6))
            cout << "Yes" << endl << N+6;
        else
            cout << "No" << endl << J_Prime_Six(N+1);
    }else{
        cout << "No" << endl << J_Prime_Six(N+1);
    }
}