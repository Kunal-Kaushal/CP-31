#include <iostream>
using namespace std;
int main(){
    int n;
    int x;
    cin>>n;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxgas=1;
    int i=maxgas;
    int k =0;
    for(int j=0;j<=x;j++){
        if(j==arr[k]){
            i=maxgas;
            k++;
        }
        else{
            i--;
        }
    }
    return 0;
}