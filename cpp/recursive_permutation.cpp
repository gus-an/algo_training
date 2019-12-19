#include <iostream>
#include <array>
#include <deque>


using namespace std;



int main() {
    array<int, 5> x = {1,2,3};
    // for(int i = 0; i < len)
    cout << x.size() << "\n";
    cout << x.at(4);

    for(auto e : x){
        e = 1;
    }

    for(auto e : x){
        cout << e;
    }

}