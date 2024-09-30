#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    cout << A * (B - (B / 10) * 10) << endl
         << A * ((B / 10) - (B / 100) * 10)  << endl
         << A * (B / 100) << endl
         << A * B;
}
