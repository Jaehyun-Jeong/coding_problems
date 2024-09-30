#include <iostream>
using namespace std;

void print_all_operator(
        unsigned short int a,
        unsigned short int b){
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
}

int main(){
    unsigned short int number1, number2;

    cin >> number1 >> number2;

    print_all_operator(number1, number2);

    return 0;
}
