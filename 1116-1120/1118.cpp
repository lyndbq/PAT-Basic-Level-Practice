#include<bits/stdc++.h>
using namespace std;

bool pds(char x)
{
    return x >= '0' && x <= '9';
}

int main()
{
    int i, j;
    string s;
    string L[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    vector<int> ans;
    for(i=0; i<11; i++){
        cin >> s;
        if(s.size() == 1){
            ans.push_back(stoi(s));
            continue;    
        }
        if(pds(s.front())){
            for(j=0; j<s.size(); j++)
                if(!pds(s[j]))
                    break;
            int a = stoi(s.substr(0,j)), b = stoi(s.substr(j+1));
            if(s[j] == '/')
                ans.push_back(a/b);
            else if(s[j] == '*')
                ans.push_back(a*b);
            else if(s[j] == '+')
                ans.push_back(a+b);
            else if(s[j] == '-')
                ans.push_back(a-b);
            else if(s[j] == '%')
                ans.push_back(a%b);
            else
                ans.push_back(pow(a, b));
        }else{
            for(j=0; j<10; j++)
                if(L[j] == s){
                    ans.push_back(j);
                    break;
                }
            if(j == 10){
                ans.push_back(sqrt(stoi(s.substr(4))));
            }
        }
    }
    for(i=0; i<ans.size()-1; i++)
        cout << ans[i];
    cout << ans.back();

}