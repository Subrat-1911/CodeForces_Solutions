#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    string ans;
    while(i<n){
        if(s[i]=='.'){
            ans+='0';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            ans+='1';
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            ans+='2';
            i+=2;
        }
        
    }
    cout<<ans;
}