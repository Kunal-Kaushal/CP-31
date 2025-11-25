#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int count1=0,count0=0,t_size=0;
        for(auto i :s){
            if(i=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        for(int i =0;i<s.length();i++){
            if(s[i]=='0' && count1>0){
                t_size++;
                count1--;
            }
            else if(s[i]=='1' && count0>0){
                t_size++;
                count0--;
            }
            else{
                break;
            }
        }
        cout<<s.size()-t_size<<endl;
    }
    return 0;
}