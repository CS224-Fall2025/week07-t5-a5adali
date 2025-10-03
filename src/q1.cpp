#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while(n>0) {
        int digit = n%10;
        sum +=digit*digit;
        n = n/10;
    }
    ;
}


int main() {
    
}