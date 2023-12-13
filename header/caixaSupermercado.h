#ifndef CAIXASUPERMERCADO_HPP
#define CAIXASUPERMERCADO_HPP

#include <iostream>
#include <vector>
#include "carrinho.h"

class Caixa : public Carrinho{
    private:
        std::vector<Carrinho> carrinhos;
    public:
        void menuCaixa();
        void registrarCompra();
        void listarCompras();
};

#endif
