#ifndef CARRINHO_H
#define CARRINHO_H

class Carrinho
{
    private:
        vector <Produto> produtos;
        int quantidade_produtos;
    
    public:

        void set_quantidade( int );

        void adicionarProdutos( const string& nome, int quantidade );
        void mostraCompras() const;
        void removerProduto( const string& nome );
    
        int get_quantidade();
};

#endif