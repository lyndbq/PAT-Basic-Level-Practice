#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    string xh;
    int d,c;
}Node;

bool cmp(Node x, Node y)
{
    if(x.c+x.d != y.c+y.d)
        return x.c+x.d > y.c+y.d;
    else if(x.d != y.d)
        return x.d > y.d;
    else
        return x.xh < y.xh;
}

int main()
{
    int N,L,H, ans = 0;
    cin >> N >> L >> H;
    vector<Node> K(N), A, B, C, D;

    for(int i=0; i<N; i++){
        cin >> K[i].xh >> K[i].d >> K[i].c;
        if(K[i].d < L || K[i].c < L)
            continue;

        if(K[i].d >= H && K[i].c >= H)
            A.push_back(K[i]);
        else if(K[i].d >= H)
            B.push_back(K[i]);
        else if(K[i].d >= K[i].c)
            C.push_back(K[i]);
        else 
            D.push_back(K[i]);
        ans++;
    }
    sort(A.begin(), A.end(), cmp);
    sort(B.begin(), B.end(), cmp);
    sort(C.begin(), C.end(), cmp);
    sort(D.begin(), D.end(), cmp);

    cout << ans << endl;
    for(auto i:A)
        cout << i.xh << " " << i.d << " " << i.c << endl;
    for(auto i:B)
        cout << i.xh << " " << i.d << " " << i.c << endl;
    for(auto i:C)
        cout << i.xh << " " << i.d << " " << i.c << endl;
    for(auto i:D)
        cout << i.xh << " " << i.d << " " << i.c << endl;
}