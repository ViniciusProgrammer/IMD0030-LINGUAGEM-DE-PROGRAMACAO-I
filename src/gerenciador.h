#ifndef GERENCIADOR_HPP
#define GERENCIADOR_HPP

#include <iostream>

using namespace std;

#include "produto.h"
#include "cliente.h"
#include "carrinho.h"

class Gerenciador : public Produto, public Carrinho, public Cliente{

    private:

    public:

};

#endif
