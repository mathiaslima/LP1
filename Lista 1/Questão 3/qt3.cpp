#include <iostream>

using namespace std;

int main() {
    int qtd;
    int sumAll = 0;
    
    cout << "Digite a quantidade de números no conjunto:" << endl;
    cin >> qtd;
    cout << "Digite os números do conjunto:" << endl;
    for (int i = 0; i < qtd; i++)
    {  
       int number;
       cin >> number;
       sumAll += number;
    }

    cout << sumAll/qtd << endl;

    return 0;
}