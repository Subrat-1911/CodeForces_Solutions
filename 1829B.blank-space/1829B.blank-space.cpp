#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int nums[n];
        for(int j=0;j<n;j++){
            cin>>nums[j];
        }
        int countZeros=0;
        int maxZeros=0;
        for(int k=0;k<n;k++){
            if(nums[k]==0){
                countZeros++;
                if(maxZeros<countZeros){
                    maxZeros=countZeros;
                }
            }
            else{
                countZeros=0;
            }
        }
        cout<<maxZeros<<endl;
        

    }
    
}