/*
   Arrays: 6.20 Jogo de craps. Escreva um programa que execute 1000  partidas
   de craps (sem intervenção humana) e responda  a cada uma das perguntas a seguir:
   a) Quantos jogos são ganhos no primeiro, no segundo,..., no vigésimo
   lançamento e após o vigésimo  lançamento?
   b) Quantos jogos são perdidos no primeiro, no segundo,..., no vigésimo
   lançamento e após o vigésimo  lançamento?
   c) Quais são as chances de se ganhar no craps?  [Nota: você descobrirá que
   craps é um dos jogos  mais honestos do cassino. O que você acha que  isso significa?]
   d) Qual a média de lançamentos em um jogo de craps?  e) As chances de
   vencer crescem se o jogo se prolongar?
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 202). Edição do Kindle.
   Autor: Pedro Filho, 06/12/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <time.h>
#define SIZE 1000

// protótipos
void printJogos( const int arr[], int size );

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variáveis
	int dado1 = 0; // para o primeiro dado
	int dado2 = 0; // para o segundo dado
	int soma = 0; // soma os dados
  int media = 0, medPrima = 0, medSeg = 0, medPerde = 0;
  int primeira = 0, segunda = 0, perdeu = 0;
  int continua = 0;

	// array
	int jogos[ SIZE ] = {0};

	srand( time(NULL) ); // PARA rand

	// ADICIONA VALOR AO ARRAY
	// loop para adicionar elementos ao array
	for( int i = 0; i < SIZE; i++ )
  {
    // lança os dados
    dado1 = 1 + rand() % 6; // dado1 recebe números aleatórios
    dado2 = 1 + rand() % 6; // dado2 recebe números aleatórios
    soma = dado1 + dado2; // soma recebe a soma dos dados
    ++jogos[ soma ]; // armazena e conta o resultado da soma
    // printf( "%3d + %3d = %3d\n", dado1, dado2, soma ); // imprime

    // se for a primeira jogada e a soma for igual a 7 ou 11
    if( (i == 0 && soma == 7) || (i == 0 && soma == 11) )
    { // mostra
      ++primeira;
    } // se não for a primeira jogada e o resultado for 7 ou 11
    else if( soma == 7 || soma == 11 )
    { // mostra
      ++segunda;
    } // sa a soma for igual a 2, 3, ou 11
    else if( soma == 2 || soma == 3 || soma == 12 )
    { //você perdeu
      ++perdeu;
    } // se a soma for igual a 4, 5, 6, 8, 9 ou 10
    else if( soma == 4 || soma == 5 || soma == 6 || soma == 8 ||
             soma == 9 || soma == 10 )
    { // continua o jogando
      ++continua;
    } // fim else if

  } // fim for adiciona valor

  // RESULTADOS
  printf( "\nDe %d jogadas:\n", SIZE );
  printf( "Os número 7 ou 11 sairam na primeira jogada (%d) vezes.\n ", primeira );
  printf( "Os número 7 ou 11 sairam na segunda jogada (%d) vezes.\n ", segunda );
  printf( "Os números 2, 3, e 12 sairam (%d) vezes.\n", perdeu );
  printf( "Os números de 4 a 10 sairam   (%d) vezes.\n ", continua );

  // RESUMO DA MÉDIA
  printf( "\nCHANCES DE VENCER OU PERDER EM %d JOGADAS:\n", SIZE );
  medPrima = primeira * 100 / SIZE; // calcula a média
  printf( "Chance de vencer na Primeira jogada %d%%\n", medPrima );
  medSeg = segunda * 100 / SIZE; // média
  printf( "Chances de vencer depois da primeira jogada %d%%\n", medSeg );
  medPerde = perdeu * 100 / SIZE; // media
  printf( "Chances de Perder %d%%\n", medPerde );
  media = continua * 100 / SIZE; // média
  printf( "Chances de acertar os Números de 4-10 %d%%\n", media );
  // imprime os elementos do array pela função printJogos
  printJogos( jogos, SIZE );

	// pula uma linha
	printf("\n");

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função printJogos
void printJogos( const int arr[], int size )
{
  // IMPRIME OS VALORES
  // loop para mostra os valores de jogos
  for( int mostra = 2; mostra < 13; mostra++ )
  {
    if( mostra % 2 == 0 )
    {
      printf( "\n" );
    }
    // imprime
    printf( "%3d%5d", mostra, arr[ mostra ] );
  } // fim if

} // fim for printJogos
