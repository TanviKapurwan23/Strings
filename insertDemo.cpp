#include<iostream>
#include<string>

using namespace std;


void insertDemo(string str, string ch, int k){
     str.insert(k, ch);
     cout<<"Modified String: "<<str<<endl;
}

int main(){

    string str("tech life");
    string ch = "geek";
    int k = 5;

    cout<<"Original String:"<<str<<endl;
    insertDemo(str, ch, k);

    return 0;
}

