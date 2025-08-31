#include<iostream>
#include<string>

using namespace std;

int l_lindo(string str, char l = 'a', int izq = 0, int der = -1){
    if (der == -1){
        der = str.size() - 1;
    }

    if (izq == der){ //caso base: un solo elemento
        if (str[izq] == l) return 0;
        else return 1;
    }

    int medio = (izq + der) / 2;
    
    int cambios_izq = 0;
    for (int i = izq; i <= medio; i++){
        if (str[i] != l) cambios_izq ++;
    }
    
    int cambios_der = 0;
    for (int j = medio + 1; j <= der; j++){
        if (str[j] != l) cambios_der ++;
    }

    return min(cambios_izq + l_lindo(str, l + 1, medio + 1, der), cambios_der + l_lindo(str, l + 1, izq, medio));
}


int main(){
    cout << l_lindo("z") << endl;
    cout << l_lindo("bbaaceaa") << endl;
    cout << l_lindo("jkghasdf") << endl;
    cout << l_lindo("x") << endl;
    cout << l_lindo("da") << endl;
    cout << l_lindo("ccddaabb") << endl;

    return 0;
}