#include<bits/stdc++.h>
using namespace std;

string CL(long long x, long long y)
{
    int k = __gcd(x, y);
    x /= k;
    y /= k;

    if(y < 0){
        x = -x;
        y = -y;
    }

    string A;
    if(x == 0)
        return "0";
    if(y == 0)
        return "Inf";

    if(x < 0){
        A += '-';
        x = -x;
    }
    if(x % y == 0)
        A += to_string(x/y);
    else if(x / y == 0)
        A += to_string(x) + "/" + to_string(y);
    else{
        A += to_string(x/y) + " " + to_string(x-(y*(x/y))) + "/" + to_string(y);
    }
    if(A.front() == '-'){
        A = "(" + A + ")";
    }
    return A;

}

int main()
{
    char z;
    long long x, y, a, b, X, Y;
    cin >> x >> z >> y >> a >> z >> b;

    string A = CL(x, y), B = CL(a, b);

    cout << A << " + " << B << " = " << CL(x*b + a*y, y*b) << endl;

    cout << A << " - " << B << " = " << CL(x*b - a*y, y*b) << endl;

    cout << A << " * " << B << " = " << CL(x*a, y*b) << endl;

    cout << A << " / " << B << " = " << CL(x*b, y*a) << endl;
}