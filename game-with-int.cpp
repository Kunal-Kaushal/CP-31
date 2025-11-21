#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    while((n--) > 0){
        cin>>i;
        if((i+1)%3==0 || (i-1)%3==0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}