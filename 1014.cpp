#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool ok = true;
    string A, B, C, D;
    cin >> A >> B >> C >> D;
    vector<string> H = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

    if(A.size() > B.size())
        swap(A, B);
    if(C.size() > D.size())
        swap(C, D);

    for(int i=0; i<A.size(); i++){
        if(ok){
            if(A[i] >= 'A' && A[i] <= 'G' && A[i] == B[i]){
                ok = false;
                cout << H[A[i]-'A'] << " ";
            }
        }else{
            if(A[i] == B[i])
                if(A[i]>='A' && A[i]<='N'){
                    cout << 10+A[i]-'A';
                    break;
                }else if(A[i]>='0' && A[i]<='9'){
                    cout << 0 << A[i]-'0';
                    break; 
                }
        }
    }
    cout << ":";
    for(int i=0; i<C.size(); i++){
        if(((C[i]>='a' && C[i]<='z') || (C[i]>='A' && C[i]<='Z')) && C[i] == D[i]){
            if(i < 9)
                cout << 0 << i;
            else
                cout << i;
            break;        
        }
    }


}