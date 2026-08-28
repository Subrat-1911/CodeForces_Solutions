#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m=s.size();
    int count=0;
    for(int i=1;i<m;i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    cout<<count;
}