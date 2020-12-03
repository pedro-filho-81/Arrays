/*
    Arrays: 6.10 Comiss�es de vendas. Use um array com subscrito �nico para
    resolver o problema a seguir. Uma empresa paga o  sal�rio de seus vendedores
    com base em uma comiss�o. O  vendedor recebe R$ 200,00 por semana, e mais 9
    por cento de suas vendas brutas nessa semana. Por exemplo, um  vendedor,
    que totalize R$ 3.000,00 em vendas em uma  semana, receber� R$ 200,00
    e mais 9 por cento de R$  3.000,00, ou seja, R$ 470,00. Escreva um programa
    em  C (usando um array de contadores) que determine quantos vendedores
    receberam sal�rios dentro de cada um dos  seguintes intervalos (suponha que
    o sal�rio de cada vendedor seja arredondado em um valor inteiro):
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edi��o do Kindle.
    Autor: Pedro Filho, /12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR
#define FREQUENCIA 9 // DEFINE O TAMANHO DO VETOR FREQU�NCIA

// PROT�TIPOS de fun��o
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
void pesquisar( int frq[], int tam_frq, int vt[], int size ); // para pesquisar a faixa salarial dos vendedores
void mostrar_pesquisa(int vt[], int size ); // para mostrar o valor da pesquisa

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ];
   int frequencia[ FREQUENCIA ];

   // chamar a fun��o adicionar valores
   add_valor( vetor, SIZE);

   // chamar a fun��o mostrar valores
   mostrar_vetor( vetor, SIZE );

   // chamar a fun��o pesquisar
   pesquisar( frequencia, FREQUENCIA, vetor, SIZE );

   mostrar_pesquisa(frequencia, FREQUENCIA );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da fun��o main

// fun��o adicionar valores
void add_valor( int vt[], int size )
{
   // vari�veis
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
   // vetor recebe o valor do sal�rio
   vt [ i ] = salario;
   } // fim for adiciona valor
} // fim fun��o

// fun��o mostrar_vetor
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
} // fim fun��o

// fun��o pesquisar
void pesquisar( int frq[], int tam_frq, int vt[], int size )
{
   // loop para verificar a frequencia
   for( int i = 0; i < size; i++ ) {
      // contar a frequ�ncia que determinado valor aparece
      ++frq[ vt[ i ] ];
   } // fim loop for
} // fim fun��o

void mostrar_pesquisa( int  vt[], int size )
{
   for(int i = 0; i < size; i++ ) {
      printf( "%d -> %d\n", i, vt[ i ] );
   }
}
