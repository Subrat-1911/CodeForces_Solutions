#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int nums[3];
        for(int i=0;i<3;i++){
            cin>>nums[i];

        }
        int min=INT_MAX;
        for(int i=0;i<3;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        int ans=n-min;
        cout<<ans<<endl;
    }
}