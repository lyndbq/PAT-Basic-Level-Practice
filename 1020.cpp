#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<double,double> x, pair<double,double> y)
{
    return x.second/x.first > y.second/y.first;
}

int main()
{
    double N, D, ans = 0;
    cin >> N >> D;

    vector<pair<double,double> > H(N);

    for(int i=0; i<N; i++)
        cin >> H[i].first;
    for(int i=0; i<N; i++)
        cin >> H[i].second;

    sort(H.begin(), H.end(), cmp);


    for(int i=0; i<H.size() && D != 0; i++){
        if(H[i].first <= D){
            ans += H[i].second;
            D -= H[i].first;
        }else{
            ans += H[i].second/H[i].first*D;
            D = 0;
        }
    }
    printf("%.2lf", ans);
}