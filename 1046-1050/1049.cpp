#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    // long long SUM = 0;
    long double x, SUM = 0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x;
        SUM += x * (N-i) * (i+1);
        // SUM += (long long)(x * 1000) * (N-i) * (i-1);
    }
    printf("%.2lf", SUM);
    // printf("%.2f", SUM / 1000.0);
}