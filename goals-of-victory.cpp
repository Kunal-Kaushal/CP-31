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
        int sum=0;
        for(int i=0;i<size-1;i++){
            cin>>input;
            arr.push_back(input);
            sum+=input;
        }
        cout<<sum*-1<<endl;
    
    }
    return 0;
}