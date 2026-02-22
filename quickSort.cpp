
#include <iostream>
#include <vector>
using namespace std;

vector<int> quicksort(vector<int> v){
    int tam = v.size();
    if(tam < 2){
        return v;
    }else{
        
        int pivo = v[0];
        int tam1 = v.size();
        vector<int> maiores;
        vector<int> menores;
        vector<int> resultado;
        
        for(int i = 1; i < tam1; i++){
            if(v[i] <= pivo){
                menores.push_back(v[i]);
            }else{
                maiores.push_back(v[i]);
            }
        }
        
        vector <int> esq = quicksort(menores);
        resultado.insert(resultado.end(), esq.begin(), esq.end());
        
        resultado.push_back(pivo);
        
        vector <int> dir = quicksort(maiores);
        resultado.insert(resultado.end(), dir.begin(), dir.end());

        return resultado;
    }
}

int main()
{
    vector<int> v = {10, 5, 2, 3};
    vector<int> result;
    
    result = quicksort(v);
    
    for(int i = 0; i < v.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}