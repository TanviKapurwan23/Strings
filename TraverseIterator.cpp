#include<bits/stdc++.h>
using namespace std;

void TraverseLength(string &str, int N){
    string::iterator itr;
    for(itr = str.begin(); itr != str.end(); itr++){
        cout<<*itr<<" ";
    }
}



int main(){

    string str = "TechGeekLife";
    int N = str.length();

    TraverseLength(str, N);
    return 0;
}