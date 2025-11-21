#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        string s;
        cin>>s;
        bool has3=false;
        int cnt=0;
        for(int i =0;i<size;i++){
            if(s[i]=='.') cnt++;
            if(i+2<size && s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                has3=true;
                break;
            }  
        }
        if(has3) cout<<2<<endl;
        else{
            cout<<cnt<<endl;
        }
    }
    
    return 0;
}