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
        printf("NENHUM PRODUTO REGISTRADO!");
        return;
    }


    for(int i = 0; i < qtdProdutos; i++){
        printf("%d - %s (%s)\n",produtos[i].id,produtos[i].nome,produtos[i].setor);
    }

    printf("Digite 0 para voltar ao menu: ");
    int x;
    scanf("%d%*c", &x);
}
