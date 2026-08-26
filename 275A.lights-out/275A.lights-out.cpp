#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int ans[3][3]={1,1,1,1,1,1,1,1,1};
    for(int i=0;i<3;i++){   // i means up down row
        for(int j=0;j<3;j++){   // j means left right column
            if(arr[i][j]%2==0) continue;
            else{
                ans[i][j]=1-ans[i][j];  
                if(i-1>=0){ //up.
                    // if 1 convert into 0, if 0 convert into one
                    ans[i-1][j]=1-ans[i-1][j];
                }
                if(i+1<3){  // down
                    ans[i+1][j]=1-ans[i+1][j];
                }
                if(j-1>=0){ //left
                    ans[i][j-1]=1-ans[i][j-1];
                }
                if(j+1<3){ //right
                    ans[i][j+1]=1-ans[i][j+1];
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }


}