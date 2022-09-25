#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

// STRUCTS
struct Produto {
    int id;
    char nome[50];
    char setor[30];
};

struct Pet {
    int id;
    char nome[50];
    char raca[50];
};

// FUNÇÕES
void cadastrarProduto();
void listarProdutos();
void cadastrarPet();
void registrarVenda();
void listarVendas();
void agendarBanho();

#endif
