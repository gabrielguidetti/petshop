#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Seja bem vindo!\n\n");

    // VARIAVEIS (DECLARAR EMBAIXO DA ÚLTIMA JÁ CRIADA)
    int x = 0;
    int escolha = 9;
    int qtdProdutos = 0;
    int qtdPets = 0;
    struct Produto produtos[20];
    struct Pet pets[20];
    int vendas[20][2]; // primeira coluna é o id do produto vendido, e a segunda coluna é a quantidade vendida
    int qtdVendas = 0;

    // MENU
    system("cls");
    while(escolha != 0){
        printf("\nMENU PRINCIPAL!");
        printf("\nDigite o número da opção desejada:\n");
        printf("1: Cadastrar produto.\n");
        printf("2: Listar produto.\n");
        printf("3: Cadastrar pet.\n");
        printf("4: Registrar venda.\n");
        printf("5: Listar vendas.\n");
        printf("6: Agendar banho e tosa.\n");
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
                printf("Digite 0 para voltar ao menu: ");
                scanf("%d%*c", &x);
                break;

            case 3:
                system("cls");
                cadastrarPet(&pets, &qtdPets);
                break;

            case 4:
                system("cls");
                registrarVenda(&vendas, &qtdVendas, produtos, qtdProdutos);
                int temp = qtdVendas-1;
                break;

            case 5:
                system("cls");
                listarVendas(vendas,produtos,qtdVendas);
                printf("Digite 0 para voltar ao menu: ");
                scanf("%d%*c", &x);
                break;

            case 6:
                system("cls");
                agendarBanho();
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
