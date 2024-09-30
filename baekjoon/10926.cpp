#include <iostream>
using namespace std;

int main(){
    char* userName = new char[51];

    cin >> userName;
    cout << userName << "\?\?!";

    delete [] userName;

    return 0;
}
