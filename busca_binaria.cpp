#include <iostream>
#include <vector>
using namespace std;

int busca_binaria(const vector<int>& v, int item){
    int baixo = 0;
    int alto = v.size() - 1;
    int meio = 0;
    int chute = 0;
    
    while(baixo <= alto){
        meio = (baixo + alto) / 2;
        chute = v[meio];
        
        if(chute == item){
            return meio;
        } else if(chute > item){
            alto = meio - 1;
        }else{
            baixo = meio + 1;
        }
    }
    
    return 0;
    
}


int main()
{
    vector<int> v = {1, 3, 5, 7, 9};
    int resultado;
    resultado = busca_binaria(v, 9);
    cout << "resultado da busca: " << resultado << endl;
    return 0;
}