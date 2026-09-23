#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        totalSum+=nums[i];
    }
    sort(nums.begin(),nums.end());
    int count=0;
    int i=n-1;
    int part_sum=0;
    while(part_sum<=totalSum/2){
        part_sum+=nums[i];
        count++;
        i--;
    }
    cout<<count;
    
}