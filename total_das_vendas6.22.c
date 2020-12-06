/*
    Arrays:
    Autor: Pedro Filho, /12/2020.
*/
/* Exercício 6.22 Total de vendas.Escreva um programa que leia
  todas as informações das vendas do mês passado e resuma
  o total de vendas por vendedor por produto. Todos os totais
  devem ser armazenados em um array com subscrito duplo sales.
  Depois de processar todas as informações do mês passado,
  imprima os resultados em formato tabular, com cada uma das
  colunas representando um vendedor em particular, e cada uma
  das linhas representando um produto em particular.
  Calcule o total de cada linha para obter o total de vendas
  de cada produto no mês passado; cruze os resultados obtidos
  com os de cada coluna para obter o total de vendas por vendedor
  no mês passado. Seu relatório tabular deverá incluir os totais
  à direita das linhas e no final das colunas.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 202).
  Edição do Kindle. Pedro Filho, 25/07/2020.*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#define LINHA 5
#define COLUNA 4

// protótipo de função
void printValor( int arr[][ COLUNA ], int lin, int col );
int somaValor( int arr[][ COLUNA ], int lin, int col );

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variáveis
	int vendedor = 0; // para identificar o vendedor
	int produto = 0; // para identificar o produto
	int valor = 0; // recebe valores informados pelo usuário
	int totVendas[ LINHA ][ COLUNA ] = {0}; // para armazenar os valores do usuário

	// ADICIONAR VALORES
	// loop for para linha
	for( int lin = 0; lin < LINHA; lin++ )
  { // loop for para coluna
    for( int col = 0; col < COLUNA; col++ )
    {
      // mostra mensagem
      printf( "Produto[%d] Vendedor[%d] valor R$", lin + 1, col + 1 );
      scanf( "%d", &valor ); // valor informado pelo usuário

      // totVendas recebe o valor informado
      totVendas[ lin ][ col ] = valor;

    } // fim for interno

    printf( "\n" ); // pula uma linha
  } // fim for externo

  // chama função printValor
  printValor( totVendas, LINHA, COLUNA );

  // chama a função somaValor
  printf( "\n\nValor total das vendas R$%d", somaValor( totVendas, LINHA, COLUNA ) );

	// pula duas linha
	printf("\n\n");

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// PARA IMPRIMIR OS VALORES EM FORMA DE TABELA
// função printVendedor
void printValor( int arr[][ COLUNA ], int lin, int col )
{
  // limpa a tela
  system( "cls" );

  // variável
  int somaLin = 0; // para somar os valores da linha

  // mostra cabeçalho
  printf( "\t%3s", " { **** TOTAL DAS VENDAS **** }\n" );
  printf( "Vendedor:[1]     [2]     [3]     [4]     Total\n" );
  printf( "\t*************************************" );

	//ADICIONAR VALOR
	for( int linha = 0; linha < lin; linha++ )
  {
    // mostra
    printf( "\nProd:%d", linha + 1 );

    // loop da coluna
    for( int coluna = 0; coluna < col; coluna++ )
    {
      // imprime o valor das vendas
      printf( "\t%4.3d", arr[ linha ][ coluna ] );

      // soma o valor da linha
      somaLin += arr[ linha ][ coluna ];

    } // fim for interno

    // mostra o valor da linha
    printf( "%8d\n", somaLin );
    somaLin = 0; // zera o valor da linha para nova soma

  } // fim for externo

  // mostra o fim da tabela
  printf( "\n\t******************************* Geral\n" );
  printf( "Tot R$" ); // mostra o total por vendedor

} // fim função printVendedor

// SOMA OS VALORES
// função somaValor
int somaValor( int arr[][ COLUNA ], int lin, int col )
{
  // variáveis
  int somaCol = 0, totalCol = 0; // para calcular os valores da tabela
  int mais = 0; // para controlar o índice da coluna

  // loop par controlar a repetição
  for( int j = 0; j < col; j++ )
  {
    // loop para somar o valor da coluna
    for( int i = 0; i < lin; i++ )
    {
      // soma o valor da coluna
      somaCol += arr[i][ mais ];
    } // fim for interno

    mais += 1; // controla o índice da coluna

    // mostra o total da soma da coluna
    printf( "\t%2d", somaCol );
    totalCol += somaCol; // soma os totais de cada coluna
    somaCol = 0; // zera a soma da coluna para novo cálculo

  } // fim for externo

  // mostra o total das vendas na tabela
  printf( "%9d", totalCol );

  return totalCol; // retorna o valor total da coluna

} // fim função somaValor
