#include<iostream>
#include<string>

int main(){

    std::string str = "tech eeklife";

    int index = 4;

    char ch = 'G';

    std::cout<<"Original String = "<<str<<std::endl;

    str.replace(index, 1, 1, ch);

    std::cout<<"Modified String = "<<str<<std::endl;

    return 0;
}