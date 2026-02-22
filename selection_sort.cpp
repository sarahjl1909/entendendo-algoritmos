
#include <iostream>
#include <vector>
using namespace std;

int buscaMenor(const vector<int>& v){
    int menor = v[0];
    int menor_indice = 0;
    
    for(int i = 1; i < v.size(); i++){
        if(v[i] < menor){
           menor = v[i];
           menor_indice = i;
        }
    }
    return menor_indice;
}

vector<int> ordenacaoPorSelecao(vector<int>& v){
    vector<int> novoV = {};
    
    int tam = v.size();
    
    for(int i = 0; i < tam; i++){
        int menor = buscaMenor(v);
        
        novoV.push_back(v[menor]);
        v.erase(v.begin() + menor);
    }
    
    return novoV;
}

int main()
{
    vector<int> v1 = {5, 3, 6, 2, 10};
    vector<int> resultado = {0};
    
    resultado = ordenacaoPorSelecao(v1);
    
    for(int elemento: resultado){
        cout << "  " << elemento;
    }

    return 0;
}