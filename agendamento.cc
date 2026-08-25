#include<stdio.h>

int main(){
	
int dia;
char(15) nome;
int ano = 2026;
int anoNasc;
int idade;
int valorConsulta = 150;
int cartao;
float pix;


printf("Ola seja bem-vind(a) ao agendamento de atendimento a psicologo infantil");
	
printf("Porfavor escreva o nome do paciente \n");
scanf ("%d", &nome);

printf("Escreva o ano de nascimento do paciente \n");
scanf (" %d", &anoNasc);

idade = ano - anoNasc;

if (idade <= 12){
printf("Paciente pode ser atendido");
}	else  {
printf("Paciente não tem a idade ideal");
	return 0;
}

printf("Escreva o dia do atendimento \n");
scanf ("%d", &dia);

switch (dia){

	case 1:
		printf ("Domingo");
		break;
	case 2:
		printf ("Segunda");
		break;
	case 3:
		printf ("Terca");
		break;
	case 4:
		printf ("Quarta");
		break;
	case 5:
		printf ("Quinta");
		break;
	case 6:
		printf ("Sexta");
		break;
	case 7:
		printf ("Sabado");
		break;
}

printf("Valor da consulta é de 150");
printf("Voce pagara o valor no pix ou no cartao");


printf("digite 1 para cartao ou 0 para pix \n");
scanf ("%d", &cartao);

if (cartao == 1)	{
printf("O valor a ser Pago sera R$150,00");
}	else {
	pix = 150 - (150 * 0.10);
printf ("O valor a ser pago sera R$%.2f", pix);
scanf ("%.2f", &pix);
	
}


return 0;
}
