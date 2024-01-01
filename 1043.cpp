#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int H[200] = {0};
    char K[] = {'P', 'A', 'T', 'e', 's', 't'};

    for(int i=0; i<S.size(); i++)
        H[S[i]]++;

    bool ok;
    while(1){
        ok = true;
        for(int i=0; i<6; i++)
            if(H[K[i]]){
                cout << K[i];
                H[K[i]]--;
                ok = false;
            }
        if(ok)
            break;
    }
}