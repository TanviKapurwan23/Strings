#include<bits/stdc++.h>
using namespace std;

void TraverseString(string &str, int N){
   for(int i=0; i<N; i++){
    cout<<str[i]<<" ";
   }
}

int main(){

    string str = "TechGeekLife";
    int N = str.length();
    TraverseString(str, N);
    return 0;
}

// Time Complexity: O(N)
// Auxiliary Space: O(1)