#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    long long i = 1e8;
    while(1){
        i++;
        if(J_Prime(i)){
            cout << i << " ";  
        }
        if(i - 1e8 == 500)
            break;
    }
}