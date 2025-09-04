#include<iostream>
#include<stack>

using namespace std;

bool convertibilidad(int x, int y, stack<int>& transformaciones){
    transformaciones.push(x);

    if (x == y) {
        return true;
    } else if (2*x <= y && convertibilidad(2*x, y, transformaciones)) {
        return true;
    } else if (10*x + 1 <= y && convertibilidad(10*x + 1, y, transformaciones)) {
        return true;
    } else {
        transformaciones.pop();
        return false;
    }
}

int main(){
    cout << boolalpha;

    cout << convertibilidad(1, 82) << endl; //True
    cout << convertibilidad(1, 2) << endl; //True
    cout << convertibilidad(1, 11) << endl; //True
    cout << convertibilidad(2, 162) << endl; //True
    cout << convertibilidad(5, 101) << endl; //True
    cout << convertibilidad(2, 21) << endl; //True
    cout << convertibilidad(53, 53) << endl; //True
    cout << convertibilidad(2, 22) << endl; //False
    cout << convertibilidad(2, 45) << endl; //False
    cout << convertibilidad(3, 10) << endl; //False
    cout << convertibilidad(2, 3) << endl; //False

    return 0;
}