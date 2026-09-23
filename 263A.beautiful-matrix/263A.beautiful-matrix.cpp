#include<iostream>
using namespace std;
int BeautifulMatrix(int arr[5][5]){
    int row=-1,column=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                row=i+1;
                column=j+1;
            }
        }
    }
    // i+-x=3
    // x=3-i
    int x=abs(3-row);
    int y=abs(3-column);
    int sum = x+y;
    return sum;
}
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int ans=BeautifulMatrix(arr);
    cout<<ans;
    
    
}