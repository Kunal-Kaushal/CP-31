#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        vector<int>arr;
        unordered_map<int,int>freq;
        int input;
        for(int i =0;i<size;i++){
            cin>>input;
            arr.push_back(input);
            freq[input]++;
        }
        if(freq.size()>=3){
            cout<<"no"<<endl;
        }
        else if(freq.size()==1){
            cout<<"yes"<<endl;
        }
        else{
            auto it=freq.begin();
            int c1 = it->second;
            it++;
            int c2 = it->second;
            if(abs(c1-c2)<=1) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}