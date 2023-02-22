#include <iostream>
#include <boost/array.hpp>
using namespace std;

extern "C" {
    void C_func();
}

int main(){
    C_func();
    boost::array<int, 10> arr
        = { { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } };
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "*"
             << "\n";
    }
    return 0;
}