/*
   Arrays: Seu programa deverá exibir o seguinte menu de alternativas:  Favor
   digitar 1 para “primeira classe”  Favor digitar 2 para “econômica”
   Se a pessoa digitar 1, então seu programa deverá designar um assento na
   primeira classe (assentos de 1  a 5). Se a pessoa digitar 2, então seu
   programa deverá  designar um assento na classe econômica (assentos 6 a  10).
   Seu programa deverá, então, imprimir um bilhete  de embarque que indique
   o número doassento da pessoa  e a seção a que esse assento pertence,
   primeira classe ou  classe econômica.  Use um array de subscrito único
   para representar o quadro de assentos do avião. Inicialize todos os
   elementos  do array em 0 para indicar que todos os assentos estão  vazios.
   À medida que cada assento é designado, defina o  elemento correspondente
   do array como 1, para indicar  que o assento não está mais disponível.
   Seu programa, naturalmente, nunca deverá designar  um assento que já
   foi reservado a outra pessoa. Quando a primeira classe estiver cheia,
   seu programa deverá  perguntar à pessoa se ela aceita ser colocada na
   classe  econômica (e vice-versa). Se a resposta for sim, faça
   a  designação de assentos apropriada. Se a resposta for não,  imprima
   a mensagem “O próximo voo sairá em 3  horas.”
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 202). Edição do Kindle.
   Autor: Pedro Filho,06/12/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#define SIZE 10 // para os assentos do avião

// protótipos
int addAssentos( int assentos );
void printArray( const int arr[], int size );
void organizaArray( int arr[], int size );
int pesquisaArray( const int arr[], int size, int chave );
void mensagem( const int arr[], int size );
void passagem( int assento );

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variáveis
	int classe = 0; // para selecionar a clase
	int assento1 = 0;
	int assento2 = 5;
	int resp = 0;
  int assentoAviao[ SIZE ] = {0};
  int indice = 0;

  // mostra o menu de opções
  printf( "\tRESERVA DE PASSAGEM\n" );
  printf( "\t********************\n" );
  printf( "\t1 Primeira Classe  *\n" );
  printf( "\t2 Classe Econômica *\n" );
  printf( "\t3 Sair             *\n" );
  printf( "\t********************\n" );

  // faça enquanto classe maior que 0 ou classe menor que 4
  while( classe > 0 || classe < 4 )
  {
    // entrada da opção 1 ou 2
    printf( "\tOpção 1-A, 2-B, 3-sair: " );
    // entre com 1, 2 ou 3
    scanf( "%d", &classe );

    // VERIFICA SE FOI DIGITADO CORRETAMENTE OS VALORES 1, 2 E 3
    // se classe diferente de 1, 2 ou 3
    if( classe <= 0 || classe >= 4 )
    {
      // imprima digite 1, 2 ou 3
      printf( "Digite apenas 1, 2 ou 3\n" );

    } // fim if

    // SAIRÁ DA OPÇÃO QUANDO DIGITADO 3
    else if( classe == 3 ) // se classe igual a 3
    {
      // IMPRIMA
      printf( "\n{ *** FIM DO PROGRAMA *** }\n" );
      break; // saia do programa

    } // fim else if 3

    // ADICIONA ASSENTOS NA PRIMEIRA CLASSE
    // se classe igual a 1 e o assento1 menor que 5
    else if( classe == 1 && assento1 < 5 )
    {
      ++assento1; // assento1 recebe 1
      assentoAviao[ indice ] = assento1; // assentoAviao recebe assento
      passagem( assento1 ); // emite a passagem
      indice++; // indice incrementa recebe 1

    } // fim else if 1

    // ADICIONA ASSENTOS NA CLASSE ECONÔMICA
    // se classe igual a 2 e o assento2 menor que 10
    else if( classe == 2 && assento2 < 11 )
    {
      ++assento2; // assento2 recebe 1
      assentoAviao [ indice ] = assento2; // assentoAvião recebe assento2
      passagem( assento2 ); // emite a passagem
      indice++; // indice incrementa recebe 2

    } // fim else if

    // AVISA QUE A PRIMEIRA CLASSE ESTÁ LOTADA
    // quando o assento for maior ou igual a 5 limite
    while( assento1 >= 5 )
    {
      resp = -1; // inicializa var resp em menos 1
      // faça enquanto resp menor que 0 ou resp maior que 3
      while( resp < 0 || resp > 3 )
      {
        // para sair do loop a resposta tem que ser 1 ou 2
        // imprima
        printf( "Primeira classe lotada.\n" );
        printf( "Aceita ser colocada(o) na classe econômica [1-S/2-N]? " );
        scanf( "%d", &resp ); // aguarda resposta do usuário

      } // fim while interno resp

      // VERIFICA SE A RESPOSTA DO USUÁRIO FOI 2-NÃO
      if( resp == 2 ) // se digitado 2
      {
        // imprime
        printf( "Próximo voo sairá em 3 horas.\n" );
        break; // voltar para opção
      } // fim if
      else // se for 1
      {
        break; // voltar para opção
      } // fim else

    } // fim while interno assento 1

  } // fim while externo

  // chama a função printArray
  printArray( assentoAviao, SIZE);

  // chama a função organizaArray
  organizaArray( assentoAviao, SIZE);

  // chama a função printArray
  printArray( assentoAviao, SIZE );

	// pula uma linha
	printf("\n");

	// Pausa o sistema
	system("pause");

  // fim do programa
	return 0;

} // fim main

// função imprime array
void printArray( const int arr[], int size )
{
  // MOSTRA ARRAY NA TELA
  printf( "Assentos por ordem de vendas { " );
  // loop for para impressão na tela
  for( int a = 0; a < size; a++ )
  {
    // imprime
    printf( "%d ", arr[ a ] );
  } // fim for
  // pula uma linha
  printf( " }\n" );
} // fim da função printArray

// função organizaArray
void organizaArray( int arr[], int size )
{
  // variável
  int aux = 0;

  for( int pass = 1; pass <= size; pass++ )
  {
    for( int ordem = 0; ordem < SIZE; ordem++ )
    {
      if( arr[ ordem ] > arr[ ordem + 1 ] )
      {
        aux = arr[ ordem ];
        arr[ ordem ] = arr[ ordem + 1 ];
        arr[ ordem + 1 ]= aux;
      } // fim if
    } // fim for interno
  } // fim for externo
} // fim função organiza array

// função paesquisa array
int pesquisaArray( const int arr[], int size, int chave )
{
  for( int i = 0; i < size; i++ )
  {
    if( arr[ i ] == chave )
    {
      printf( "%d = %d\n", arr[ i ], chave );
    } // fim if
  } // fim for interno
} // fim for externo

// função passagem
void passagem( int assento )
{
  char secao = ' '; // mostra a seção

  // imprime
  printf( "{ PASSAGEM AÉREA }\n" );

  // verifica o num do assente se está entre 1-5
  if(assento > 0 && assento < 6)
  {
    // se sim mostra A
    secao = 'A';

  } // fim if
  else // se não
  {
    // mostra B
    secao = 'B';

  } // fim else

  // imprime
  printf( "Assento %d, seção %c\n", assento, secao );
} // fim função passagem
