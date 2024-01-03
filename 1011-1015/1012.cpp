#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, x;
    cin >> N;
    vector<int> H[5];
    while (N--)
    {
        cin >> x;
        H[x % 5].push_back(x);
    }

    int ans = 0;
    for (auto i : H[0])
        if (i % 2 == 0)
            ans += i;
    
    if(ans != 0)
        cout << ans << " ";
    else
        cout << "N ";


    ans = 0;
    for(int i=0; i<H[1].size(); i++)
        if(i % 2 == 0)
            ans += H[1][i];
        else
            ans -= H[1][i];
    if(H[1].size() != 0)
        cout << ans << " ";
    else
        cout << "N ";

    if(H[2].size() != 0)
        cout << H[2].size() << " ";
    else
        cout << "N ";

    ans = 0;
    for (auto i : H[3])
        ans += i;

    if(H[3].size() != 0)
        printf("%.1lf ", (double)ans / H[3].size());
    else
        cout << "N ";

    ans = 0;
    for (auto i : H[4])
        ans = max(ans, i);
    if(H[4].size() != 0)
        cout << ans << endl;
    else
        cout << "N" <<endl;
}