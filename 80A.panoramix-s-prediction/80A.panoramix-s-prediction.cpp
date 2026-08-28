#include<iostream>
#include<string>
using namespace std;
bool isPrime(int m){
    for(int i=2;i<m;i++){
        if(m%i==0){
            return false;
        }
    }
    return true;

}
int nextPrime(int n){
    int m=50; //given
    for(int i=n+1;i<m;i++){
        if(isPrime(i)){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,m;
    cin>>n>>m;
    int x=nextPrime(n);
    if(isPrime(m)){
        if(x==m){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    else cout<<"NO";
}