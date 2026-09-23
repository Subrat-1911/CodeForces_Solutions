#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long nums[3];
        for(int i=0;i<3;i++){
            cin>>nums[i];
        }
        long long x= abs(nums[0]-nums[1]);
        if(nums[0]>nums[1]){
            cout<<abs(x+nums[2])<<endl;
        }
        else{
            cout<< max(x, nums[2] - x) <<endl;
        }
        
    }
}