#include<bits/stdc++.h>
using namespace std;
vector<int> findmax(vector<int>arr){
    vector<pair<int,int>>temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[i].first=arr[i];
        temp[i].second=i;
    }
    sort(temp.rbegin(),temp.rend());
    vector<int>ans(3);
    for(int i =0;i<3;i++){
        ans[i]=temp[i].second;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        vector<int>a(size),b(size),c(size);
        
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
         for(int i=0;i<size;i++){
            cin>>b[i];
        }
         for(int i=0;i<size;i++){
            cin>>c[i];
        }

        vector<int>maxa=findmax(a);
        vector<int>maxb=findmax(b);
        vector<int>maxc=findmax(c);
        int ans=0;
        for(int i =0;i<3;i++){
            for(int j =0;j<3;j++){
                for(int k=0;k<3;k++){
                    int x=maxa[i],y=maxb[j],z=maxc[k];
                    if(x==y || y==z || z==x) continue;
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
        cout<<ans<<endl;

    }
}