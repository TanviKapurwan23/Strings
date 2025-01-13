#include<iostream>
#include<string>

using namespace std;


char accessCharByIndex(string str, int k){
    return str[k];
}

int main(){
    string str("Hello coders");
    int k = 4;
    cout<<accessCharByIndex(str, k)<<endl;

    return 0;
}