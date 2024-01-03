#include<bits/stdc++.h>
using namespace std;

bool cmp(char x, char y)
{
    return x > y;
}

int main()
{
    int A, B;
    string S, X, Y;
    cin >> S;

    for(int i=S.size(); i<4; i++)
        S = "0" + S;

    do{
        sort(S.begin(), S.end());
        X = S;
        A = stoi(S);

        sort(S.begin(), S.end(), cmp);
        Y = S;
        B = stoi(S);
        
        if(A < B){
            swap(A, B);
            swap(X, Y);    
        }

        cout << X << " - " << Y << " = ";

        if(A == B){
            cout << "0000";
            break;    
        }  
        S = to_string(A-B);
        for(int i=S.size(); i<4; i++)
            S = "0" + S;
        cout << S << endl;
    }while(S != "6174");
}