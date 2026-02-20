#include <iostream>
using namespace std;

int fat(int x){
    
    if(x == 1){
        return 1;
    }else{
        return x * fat(x-1);
    }
}

int main()
{
    int x;
    cin >> x;
    int resultado = 0;
    
    resultado = fat(x);
    
    cout << "resultado: " << resultado << endl;
    return 0;
}