#include<iostream>
#include<vector>
 
using namespace std;
 
bool convertibilidad(int x, int y, vector<int>& transformaciones){
    transformaciones.push_back(y);
    if (x == y) {
        return true;
    }
    if (x > y) {
        return false;
    }

    if (y % 2 == 0) {
        return convertibilidad(x, y/2, transformaciones);
     } else if (y % 10 == 1) {
        return convertibilidad(x, (y - 1)/10, transformaciones);
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
        for (int i = transformaciones.size() - 1; i >= 0 ; i--){
            cout << transformaciones[i] << " ";
        }
    } else {
        cout << "NO";
    }
 
    return 0;
}