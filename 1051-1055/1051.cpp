#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;

    double x = a * c * cos(b+d), y = a * c * sin(b + d);
    if(fabs(x) < 0.005)
        printf("0.00");
    else
        printf("%.2f", x);

    if(fabs(y) < 0.005)
        printf("+0.00i");
    else
        printf("%+.2fi", y);
}
