#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool ok, l;
    string s;
    int N, K = 0, x, y,z;
    double ans, avg = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> s;
        ok = true;
        ans = 0;
        x = y = z = 0;
        for(auto j : s){
            if(j == '.'){
                x++;
            }else if(j == '-')
                y++;
            else if(j < '0' || j > '9'){
                ok = false;
                break;
            }else if(x){
                z++;
            }
        }
        if(y == 1 && (s[0] != '-' || s.size() == 1))
            y = 100;
        if(ok && stod(s) >= -1000 && stod(s) <= 1000 && x <= 1 && y <= 1 && z <= 2){
            K++;
            avg += stod(s);
        }else
            cout << "ERROR: "<< s << " is not a legal number" << endl;
    }
    cout << "The average of " << K;
    K == 1 ? printf(" number is ") : printf(" numbers is ");
    K ? printf("%.2lf\n", avg/K) : printf("Undefined");
}