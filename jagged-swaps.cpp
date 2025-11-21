#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        vector<int>arr;
        int input;
        
        for(int i=0;i<size;i++){
            cin>>input;
            arr.push_back(input);
        }
        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}