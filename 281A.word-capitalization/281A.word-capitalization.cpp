#include<iostream>
#include<string>
using namespace std;
bool func(long long nums){
    int sev=0;
    int four=0;
    int count=0;
    while(nums>0){
        int x=nums%10;
        if(x==4) four++;
        else if(x==7) sev++;
        count++;
        nums/=10;
    }
    int sum=four+sev;
    if(sum==4 || sum==7) return true;
    else return false;
    
}
int main(){
    long long nums;
    cin>>nums;
    int x=func(nums);
    if(x==0) cout<<"NO";
    else cout<<"YES";
}