#include<iostream>
#include<string>
using namespace std;
bool func(int nums){
    int count=0;
    bool flag = false;
    while(nums>0){
        int x=nums%10;
        if(x==4 || x==7){
            flag= true;
        }
        else flag = false;
        count++;
        nums/=10;
    }
    if((count==4 || count ==7) && flag == true){
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