#include <stdio.h>
#include <stdlib.h>

int main() { 
  // Variáveis
 int opcao;
 int quantidade;
 int idade;
 float valorIngresso = 30.50;
 float valorTotal = 0.0;
 char* filmeEscolhido = NULL;
  system("clear");

  
printf("Bem-vindo ao cinema!!\n\nValor do ingresso = R$ 30,50.\nOBS: Menores de 10 anos ou acima de 60 anos pagam R$ 15,25\n\n");
printf(" ------------------------------------------------------------------\n\n");
  
do {
// Apresentação das opções de filme
 printf("Escolha um filme:\n");
 printf("1. Missão Impossível: Acerto de Contas\n");
 printf("2. Barbie\n");
 printf("3. Besouro Azul\n");
 printf("4. Oppenheimer\n");
 printf("0. Sair\n");

// Solicitação da escolha do usuário
 printf("\nDigite o número da opção desejada: ");
 scanf("%d", &opcao);

if (opcao == 0) {
// Encerra o programa se o usuário escolher a opção 0 (Sair
  break;
  } else if (opcao < 1 || opcao > 4) {
  
// Verifica se a opção escolhida é válida
   printf("\nOpção inválida! Por favor, escolha uma opção válida.\n\n");
continue; // Retorna ao início do loop
        }

// Verifica a opção escolhida e define o nome do filme
switch (opcao) {
case 1:
  filmeEscolhido = "Missão Impossível: Acerto de Contas";
     break;
case 2:
   filmeEscolhido = "Barbie";
      break;
case 3:
  filmeEscolhido = "Besouro Azul";
      break;
case 4:
  filmeEscolhido = "Oppenheimer";
      break;
 }

 // Solicitação da quantidade de ingressos
  printf("Digite a quantidade de ingressos desejada: ");
  scanf("%d", &quantidade);

// Solicitação da idade e cálculo do valor total
  for (int i = 0; i < quantidade; i++) {
   printf("Digite a idade do ingresso %d: ", i + 1);
   scanf("%d", &idade);

// Verifica se o ingresso tem direito à meia-entrada
   if (idade < 10 || idade > 65) {
   valorTotal += valorIngresso / 2; // Meia-entrada
  } else {
   valorTotal += valorIngresso; // Preço inteiro
  }
}

// Exibe o nome do filme escolhido e o valor total da compra
  printf("\n\nFilme escolhido: %s\n", filmeEscolhido);
  printf("Valor total da compra: R$ %.2f\n", valorTotal);
  printf("\nObrigado por utilizar nosso serviço!\n\n\n\n");

// Zera o valor total para a próxima iteração do loop
valorTotal = 0.0;
        
// Pergunta se o usuário deseja voltar ao menu ou sair
  printf("Digite 1 para voltar ao menu ou 0 para sair: ");
  scanf("%d", &opcao);
} while (opcao != 0);

return 0;
}