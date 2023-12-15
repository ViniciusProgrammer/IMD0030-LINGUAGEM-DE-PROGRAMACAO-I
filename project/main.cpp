#include <iostream>
#include <string>
#include <limits>
#include <vector>

#include "caixaSupermercado.hpp"

using namespace std;

int main()
{
    Caixa caixa;
    int opcao;

    caixa.inicializarArquivo();

    do{
        caixa.menuCaixa();
        cin >> opcao;

        switch(opcao){
            case 1:
                caixa.registrarCompra();
                break;
            case 2:
                caixa.listarCompras();
                break;
            case 3:
                //caixa.excluirCompra();
                break;
            case 4:
                caixa.buscarCompras();
                break;
            case 5:
                caixa.atualizarArquivo();
                cout << "Encerrando Sistema..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    } while(opcao != 5);
    
    return 0;
}