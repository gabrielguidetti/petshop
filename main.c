#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Seja bem vindo!\n\n");

    // VARIAVEIS (DECLARAR EMBAIXO DA ÚLTIMA JÁ CRIADA)
    int escolha = 9;
    int qtdProdutos = 0;
    struct Produto produtos[20];

    // MENU
    system("cls");
    while(escolha != 0){
        printf("\nMENU PRINCIPAL!");
        printf("\nDigite o número da opção desejada:\n");
        printf("1: Cadastrar produto.\n");
        printf("2: Listar produto.\n");
        printf("3: Cadastrar pet.\n");
        printf("4: Registrar venda.\n");
        printf("5: Agendar banho e tosa.\n");
        printf("0: Sair.\n");
        scanf("%d%*c", &escolha);

        switch(escolha){
            case 1:
                system("cls");
                cadastrarProduto(&produtos, &qtdProdutos);
                break;

            case 2:
                system("cls");
                listarProdutos(produtos, qtdProdutos);
                break;

            case 3:
                system("cls");
                printf("Cadastrar pet");
                break;

            case 4:
                system("cls");
                printf("Registrar venda");
                break;

            case 5:
                system("cls");
                printf("Agendar banho e tosa");
                break;

            case 0:
                break;

            default:
                system("cls");
                printf("DIGITE UMA OPÇÃO VÁLIDA!");

        }
    }

    return 0;
}
