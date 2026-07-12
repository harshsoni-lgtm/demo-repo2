#include<iostream>
using namespace std;

namespace Demo{
    int x = 10;
}

int main(){
    cout<<"Value of x is "<<Demo::x<<endl;
    return 0;
}