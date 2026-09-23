#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n-1;
    int y=1;
    bool flag=false;
    while(y<=n/2){
        if(x%2==0 && y%2==0){
            if(x+y==n){
                flag=true;
                break;
            }
        }
        x--;
        y++;
    }
    if(flag==true) cout<<"YES";
    else cout<<"NO";
}