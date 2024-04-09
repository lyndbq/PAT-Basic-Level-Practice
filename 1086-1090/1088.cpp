#include<bits/stdc++.h>
using namespace std;

// 9

string solve(double M, double k)
{
    if(M < k)
        return "Cong";
    else if(M == k)
        return "Ping";
    else
        return "Gai";
}

int main()
{
    int M, X, Y;
    cin >> M >> X >> Y;

    for(int i=99; i>=10; i--){
        double A = i, B = i%10*10 + i/10;
        if(abs(A-B) / X == B / Y){
            cout << A << " ";
            cout << solve(M, A) << " ";
            cout << solve(M, B) << " ";
            cout << solve(M, B / Y);
            return 0;
        }
    }
    cout << "No Solution";
}