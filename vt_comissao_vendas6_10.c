/*
    Arrays: 6.10 Comissões de vendas. Use um array com subscrito único para
    resolver o problema a seguir. Uma empresa paga o  salário de seus vendedores
    com base em uma comissão. O  vendedor recebe R$ 200,00 por semana, e mais 9
    por cento de suas vendas brutas nessa semana. Por exemplo, um  vendedor,
    que totalize R$ 3.000,00 em vendas em uma  semana, receberá R$ 200,00
    e mais 9 por cento de R$  3.000,00, ou seja, R$ 470,00. Escreva um programa
    em  C (usando um array de contadores) que determine quantos vendedores
    receberam salários dentro de cada um dos  seguintes intervalos (suponha que
    o salário de cada vendedor seja arredondado em um valor inteiro):
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edição do Kindle.
    Autor: Pedro Filho, /12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR
#define FREQUENCIA 3 // DEFINE O TAMANHO DO VETOR FREQUÊNCIA

// PROTÓTIPOS de função
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
void pesquisar( int vt[], int size ); // para pesquisar a faixa salarial dos vendedores
void mostrar_pesquisa(int vt[], int size ); // para mostrar o valor da pesquisa

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ];

   // chamar a função adicionar valores
   add_valor( vetor, SIZE);

   // chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   printf( "\n" );

   pesquisar( vetor, SI ZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adicionar valores
void add_valor( int vt[], int size )
{
   // variáveis
   const int fixo = 200;
   int vendas_brutas = 0;
   int percent = 0;
   int salario = 0;

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {
   // entrada de dados
   printf( "Informe o total das vendas: " );
   scanf( "%d", &vendas_brutas );
   // calcular percentual
   percent = vendas_brutas * 9 / 100;
   // calcular salario
   salario = fixo + percent;
   // vetor recebe o valor do salário
   vt [ i ] = salario;
   } // fim for adiciona valor
} // fim função

// função mostrar_vetor
void mostrar_vetor( int vt[], int size )
{
   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );
   } // fim loop for

   // imprimir
   printf( " }\n" );
} // fim função

// função pesquisar
// para pesquisar a faixa salarial dos vendedores
void pesquisar( int vt[], int size )
{
   int conta1 = 0, conta2 = 0, conta3 = 0, conta4 = 0;
   int conta5 = 0, conta6 = 0, conta7 = 0, conta8 = 0;
   int conta9 = 0;
   // loop para pesquisar vetor
   for( int i = 0; i < size; i++ ) {
      if( vt[ i ] >= 200 && vt[ i ] <= 299 )
         ++conta1;
      if( vt[ i ] >= 300 && vt[ i ] <= 399 )
         ++conta2;
      if( vt[ i ] >= 400 && vt[ i ] <= 499 )
         ++conta3;
      if( vt[ i ] >= 500 && vt[ i ] <= 599 )
         ++conta4;
      if( vt[ i ] >= 600 && vt[ i ] <= 699 )
         ++conta5;
      if( vt[ i ] >= 700 && vt[ i ] <= 799 )
         ++conta6;
      if( vt[ i ] >= 800 && vt[ i ] <= 899 )
         ++conta7;
      if( vt[ i ] >= 900 && vt[ i ] <= 999 )
         ++conta8;
      if( vt[ i ] >= 1000 )
         ++conta9;
   } // fim for
   // imprime resultado
   printf( "Valores entre 200 e 299 %d\n", conta1 );
   printf( "Valores entre 300 e 399 %d\n", conta2 );
   printf( "Valores entre 400 e 499 %d\n", conta3 );
   printf( "Valores entre 500 e 599 %d\n", conta4 );
   printf( "Valores entre 600 e 699 %d\n", conta5 );
   printf( "Valores entre 700 e 799 %d\n", conta6 );
   printf( "Valores entre 800 e 899 %d\n", conta7 );
   printf( "Valores entre 900 e 999 %d\n", conta8 );
   printf( "Maior ou igual a 1000 %d\n", conta9 );
} // fim função

void mostrar_pesquisa(int vt[], int size ); // para mostrar o valor da pesquisa
