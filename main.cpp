#include <iostream>
#include <string>
#include "cliente.h"

using namespace std;

int main()
{
    Cliente* clientes;
    int quantidade_clientes;

    cout << "Informe a quantidad de clientes a serem cadastrados: ";
    cin >> quantidade_clientes;

    clientes = new Cliente[quantidade_clientes];

    

    
    delete [] clientes;
    
    return 0;
}