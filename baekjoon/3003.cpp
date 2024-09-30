#include <iostream>
using namespace std;

int main(){
    const int normal_status[6] = {1, 1, 2, 2, 2, 8};
    int input_status[6];

    cin >> input_status[0]
        >> input_status[1]
        >> input_status[2]
        >> input_status[3]
        >> input_status[4]
        >> input_status[5];

    cout << normal_status[0] - input_status[0] << " "
         << normal_status[1] - input_status[1] << " "   
         << normal_status[2] - input_status[2] << " "
         << normal_status[3] - input_status[3] << " "
         << normal_status[4] - input_status[4] << " "
         << normal_status[5] - input_status[5];

    return 0;
}
