#include<iostream>
#include<string>

using namespace std;

int l_lindo(const string& str, char l = 'a', int izq = 0, int der = -1){
    if (der == -1){
        der = str.size() - 1;
    }

    if (izq == der){
        if (str[izq] == l) return 0;
        else return 1;
    }

    int medio = (izq + der) / 2;
    
    int cambios_izq = 0;
    for (int i = izq; i <= medio; i++){
        if (str[i] != l) {
            cambios_izq ++;
        }
    }
    
    int cambios_der = 0;
    for (int j = medio + 1; j <= der; j++){
        if (str[j] != l) {
            cambios_der ++;
        }
    }

    return min(cambios_izq + l_lindo(str, l + 1, medio + 1, der), cambios_der + l_lindo(str, l + 1, izq, medio));
}


int main(){
    int total_casos;
    cin >> total_casos;
    
    while (total_casos != 0){
        int longitud;
        string str;

        cin >> longitud >> str;
        cout << l_lindo(str) << "\n";

        total_casos--;
    }

    return 0;
}