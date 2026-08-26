#include<iostream>
#include<string>
using namespace std;
bool func(int nums){
    int count=0;
    while(nums>0){
        int x=nums%10;
        if(x!=4 && x!=7){
            return false;
        }
        count++;
        nums/=10;
    }
    if(count==4 || count ==7){
        return true;

    }
    return false;
    
}
int main(){
    int nums;
    cin>>nums;
    int x=func(nums);
    if(x==0) cout<<"NO";
    else cout<<"YES";
}