#include<iostream>
#include<vector>

using namespace std;

bool convertibilidad(int x, int y, vector<int>& transformaciones){
    if (x == y) {
        transformaciones.push_back(x);
        return true;
    } else if (2*x <= y && convertibilidad(2*x, y, transformaciones)) {
        transformaciones.push_back(x);
        return true;
    } else if (10*x + 1 <= y && convertibilidad(10*x + 1, y, transformaciones)) {
        transformaciones.push_back(x);
        return true;
    } else {
        return false;
    }
}

int main(){
    int x, y;
    vector<int> transformaciones;

    cin >> x >> y;

    if (convertibilidad(x, y, transformaciones)) {
        cout << "YES" << "\n";
        cout << transformaciones.size() << "\n";
        for (int i = transformaciones.size() - 1; i >= 0; i--){
            cout << transformaciones[i] << " ";
        }
    } else {
        cout << "NO";
    }

    return 0;
}