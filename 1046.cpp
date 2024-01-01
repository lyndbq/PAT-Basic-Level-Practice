#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A = 0, B = 0, a,b,c,d;
    while(N--){
        cin >> a >> b >> c >> d;
        if(b == d && b == a + c)
            continue;
        if(b == a+c)
            B++;
        else if(d == a+c)
            A++;
    }
    cout << A << " " << B << endl;
}