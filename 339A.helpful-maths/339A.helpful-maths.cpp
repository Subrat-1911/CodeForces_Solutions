#include<iostream>
#include<string>
using namespace std;
string Helpful_Maths(string s){
    int n=s.size();
    if(n==1) return s;
    int ones=0;
    int twos=0;
    int threes=0;
    for(int i=0;i<n;i+=2){
        if(s[i]=='1'){
            ones++;
        }
        if(s[i]=='2'){
            twos++;
        }
        if(s[i]=='3'){
            threes++;
        }
    }
    int i=0;
    while(ones>0){
        s[i]='1';
        i+=2;
        ones--;
    }
    while(twos>0){
        s[i]='2';
        i+=2;
        twos--;
    }
    while(threes>0){
        s[i]='3';
        i+=2;
        threes--;
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<Helpful_Maths(s);
    
}