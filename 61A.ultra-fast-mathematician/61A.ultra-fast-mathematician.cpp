#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string r;
    string ans;
    cin>>s>>r;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]!=r[i]){
            ans+='1';
        }
        else ans+='0';
    }
    cout<<ans;
    
}