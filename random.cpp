#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    for (int i = 0; i < 4; i++){
        int x = rand();
        cout << i*2 << endl;
    }
    return 0; 
}