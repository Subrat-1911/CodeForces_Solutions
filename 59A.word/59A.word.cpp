#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upp=0;
    int low=0;
    int n=s.size();
    for(int i=0;i<n;i++){  //'a' is 97,'A' is 65.
        if(s[i]>='a'){
            low++;
        }
        else if(s[i]>='A'){
            upp++;

        }
    }
    if(low>=upp){  // lower case
        for(int i=0;i<n;i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i]+=32;
            }
        }
    }
    else{ //upercase
        for(int i=0;i<n;i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i]-=32;
            }
        }
    }
    cout<<s;
}