#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int x=nums[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[0]==0){
            break;
        }
        else if(nums[i]>=x && nums[i]!=0){
            count++;
        }
    }
    cout<<count;
}