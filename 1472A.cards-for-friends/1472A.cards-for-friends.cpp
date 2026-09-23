#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int count=1;
        int w,h,n;
        cin>>w>>h>>n;
        while(w%2==0){
            w=w/2;
            count*=2;
        }
        while(h%2==0){
            h=h/2;
            count*=2;
        }
        if(count>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
}