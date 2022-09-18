#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

// STRUCTS
struct Produto {
    int id;
    char nome[50];
    char setor[30];
};

// FUNÇÕES
void cadastrarProduto();
void listarProdutos();

#endif
