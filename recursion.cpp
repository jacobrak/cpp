#include <iostream>
using namespace std;

void nLines(int n){
    if (n > 0){cout << endl; nLines(n-1);}
}

int main(){
    nLines(3);
    cout << "Hello" << endl;
    nLines(2);
    cout << "Hello again" << endl;
    nLines(0);
}