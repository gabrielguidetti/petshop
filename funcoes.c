#include <stdio.h>
#include "header.h"


void cadastrarProduto(struct Produto *ptr_produtos, int *qtdProdutos){
    if(*qtdProdutos >= 19){
        printf("QUANTIDADE MÁXIMA DE PRODUTOS CADASTRADOS!");
        return;
    }

    struct Produto p;
    int index = *qtdProdutos;
    p.id = index+1;

    printf("Digite o nome do produto (sem sinais de acentuação): ");
    fgets(p.nome, 50, stdin);
    printf("Digite o setor do produto (sem sinais de acentuação): ");
    fgets(p.setor, 30, stdin);

    ptr_produtos[index] = p;

    *qtdProdutos += 1;
}

void listarProdutos(struct Produto produtos[], int qtdProdutos){
    if(qtdProdutos == 0){
        printf("NENHUM PRODUTO REGISTRADO!\n");
        return;
    }


    for(int i = 0; i < qtdProdutos; i++){
        printf("%d - %s (%s)\n",produtos[i].id,produtos[i].nome,produtos[i].setor);
    }

}

void cadastrarPet(struct Pet *ptr_pets, int *qtdPets){
    if(*qtdPets >= 19){
        printf("QUANTIDADE MÁXIMA DE PETS CADASTRADOS!");
        return;
    }

    struct Pet p;
    int index = *qtdPets;
    p.id = index+1;

    printf("Digite o nome do Pet (sem sinais de acentuação): ");
    fgets(p.nome, 50, stdin);
    printf("Digite a raca do Pet (sem sinais de acentuação): ");
    fgets(p.raca, 30, stdin);

    ptr_pets[index] = p;

    *qtdPets += 1;
}

void registrarVenda(int *ptr_vendas[20][2], int *qtdVendas, struct Produto produtos[], int qtdProdutos){

    if(*qtdVendas >= 19){
        printf("QUANTIDADE MÁXIMA DE VENDAS CADASTRADAS!");
        return;
    }

    int escolha = 0;
    int qtdVendida = 10;
    int index = *qtdVendas;

    listarProdutos(produtos, qtdProdutos);
    if(qtdProdutos == 0){
        return;
    }
    printf("Digite o id do produto vendido (Digite 0 para voltar): ");
    scanf("%d%*c", &escolha);

    if(escolha != 0){
        printf("\nDigite a quantidade vendida: ");
        scanf("%d%*c",&qtdVendida);
        ptr_vendas[index][0] = escolha;
        ptr_vendas[index][1] = qtdVendida;
        *qtdVendas += 1;
    }
}

void listarVendas(int vendas[20][2], struct Produto produtos[], int qtdVendas){
    if(qtdVendas == 0) {
        printf("NENHUMA VENDA ENCONTRADA!\n");
        return;
    }

    for(int i = 0; i < qtdVendas; i++){
        printf("Id venda: %d\n", i+1);
        int indexP = vendas[i][0];
        indexP -= 1;
        printf("Produto: %s", produtos[indexP].nome);
        printf("Quantidade vendida: %d\n\n", vendas[i][1]);
    }
}

void agendarBanho(){
    char bt[20];
    char data[20];
    char horario[20];
    printf("Deseja agendar um banho ou uma tosa? ");
    fgets(bt, 20, stdin);
    printf("\n Digite a data: ");
    fgets(data, 20, stdin);
    printf("\nDigite o horario: ");
    fgets(horario, 20, stdin);
}
