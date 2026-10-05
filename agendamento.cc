#include <stdio.h>

int main() {

    int dia;
    char nome[15];
    int ano = 2026;
    int anoNasc;
    int idade;
    int valorConsulta = 150;
    int cartao;
    float pix;

    printf("Ola! Seja bem-vindo(a) ao agendamento de atendimento a psicologo infantil\n");

    printf("Por favor, escreva o nome do paciente:\n");
    scanf("%14s", nome);

    printf("Escreva o ano de nascimento do paciente:\n");
    scanf("%d", &anoNasc);

    idade = ano - anoNasc;

    if (idade <= 12) {
        printf("Paciente pode ser atendido\n");
    } else {
        printf("Paciente nao tem a idade ideal\n");
        return 0;
    }

    printf("Escreva o dia do atendimento:\n");
     printf("1 - Domingo\n");
    printf("2 - Segunda\n");
    printf("3 - Terca\n");
    printf("4 - Quarta\n");
    printf("5 - Quinta\n");
    printf("6 - Sexta\n");
    printf("7 - Sabado\n");
    scanf("%d", &dia);

    switch (dia) {

        case 1:
            printf("Domingo\n");
            break;

        case 2:
            printf("Segunda\n");
            break;

        case 3:
            printf("Terca\n");
            break;

        case 4:
            printf("Quarta\n");
            break;

        case 5:
            printf("Quinta\n");
            break;

        case 6:
            printf("Sexta\n");
            break;

        case 7:
            printf("Sabado\n");
            break;

        default:
            printf("Dia invalido\n");
            return 0;
    }

    printf("Valor da consulta: R$%d,00\n", valorConsulta);

    printf("Voce pagara no Pix ou no cartao?\n");
    printf("No pix tem 10 porcento de desconto \n");
    printf("Digite 1 para cartao ou 0 para Pix:\n");
    scanf("%d", &cartao);

    if (cartao == 1) {

        printf("O valor a ser pago sera R$150,00\n");

    } else if (cartao == 0) {

        pix = valorConsulta - (valorConsulta * 0.10);

        printf("O valor a ser pago sera R$%.2f\n", pix);

    } else {

        printf("Opcao de pagamento invalida\n");
    }

    return 0;
