#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y, n;
    scanf("%d/%d %d/%d %d", &a, &b, &x, &y, &n);
    int h = a * n / b, k = x * n / y;
    if(abs(a*n-(h+1)*b) < abs(a*n-h*b))
        h++;
    if(abs(x*n-(k+1)*y) < abs(x*n-k*y))
        k++;
    cout << h << "/" << n << " " << k << "/" << n;
}