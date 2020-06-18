#include<iostream>
using namespace std;


int main () {
    int a = 5; 
    int num1, num2;
    num1 = 560;
    num2 = 45; 
    
    for ( ; ; ) {
       a = a * 3;
       if(a > num1) {
          a = a - 5; 
          break;
        }
    }

    while(true) {
        a = a / 3; 
        if(a < num2) { 
            a = a - 5; 
            break;
        }
    }
    cout << a;
    return 0;
} 
