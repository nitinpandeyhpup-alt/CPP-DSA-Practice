#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] % 2 != 0){
           cout << s.substr(0, i + 1); 
           return 0;
        }
    }
}
