#include <iostream> 

using namespace std;

int main() {
    int number = 1235436922;
    int length = to_string(number).length();
    int heighest = 0;
    for(int i = length; i >= 0; i--) {
        if(heighest < number % 10) {
            heighest = number % 10;
        }
        number/= 10;
    }
    cout << heighest;
        
}

