#include<bits/stdc++.h>
using namespace std;



int main()
{
    int N, MAX = 0, MIN = 100,z;
    string MAX_n, MAX_x, MIN_n, MIN_x,x,y;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x >> y >> z;
        if(z > MAX){
            MAX_n = x;
            MAX_x = y;
            MAX = z;
        }
        if(z < MIN){
            MIN_n = x;
            MIN_x = y;
            MIN = z;
        }
    }
        
    cout << MAX_n << " " << MAX_x << endl << MIN_n << " " << MIN_x << endl;

}