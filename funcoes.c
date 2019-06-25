#include <stdio.h>
#include <stdlib.h>

//Struct que contem as especificacoes das matrizes
struct matriz{
  int linhas;
  int colunas;
  float m[10][10];
};

//Declaracao das matrizes A, B e C
struct matriz A, B, C;

//Funcao para ler uma matriz de um arquivo .txt e armazenar na matriz A
void lerArquivoMatrizA(){
 //Cria ponteiro e abre o arquivo
 FILE *file;
 file = fopen("matrizA.txt", "r");

 //Checa se houve erro ao abrir arquivo
 if(file == NULL){
   printf("\n    ERRO AO ABRIR ARQUIVO\n");
 

 //Le o numero as dimensoes da matriz do arquivo
 for(int i=0; i<1; i++){
   if(i == 0){
       fscanf(file, "%d", &A.linhas);
       fscanf(file, "%d", &A.colunas);
     
 

 //Le os valores da matriz do arquivo
 for(int i=0; i<A.linhas; i++){
   for(int j=0; j<A.colunas; j++){
     fscanf(file, "%f", &A.m[i][j]);
   
 

 printf("\n    Matriz lida com sucesso\n");

 fclose(file);
}

//Funcao para ler uma matriz de um arquivo .txt e armazenar na matriz B
void lerArquivoMatrizB(){
 //Cria ponteiro e abre o arquivo
 FILE *file;
 file = fopen("matrizB.txt", "r");

 //Checa se houve erro ao abrir arquivo
 if(file == NULL){
   printf("\n    ERRO AO ABRIR ARQUIVO\n");
 

 //Le o numero as dimensoes da matriz do arquivo
 for(int i=0; i<1; i++){
   if(i == 0){
       fscanf(file, "%d", &B.linhas);
       fscanf(file, "%d", &B.colunas);
     
 

 //Le os valores da matriz do arquivo
 for(int i=0; i<B.linhas; i++){
   for(int j=0; j<B.colunas; j++){
     fscanf(file, "%f", &B.m[i][j]);
   
 

 printf("\n    Matriz lida com sucesso\n");

 fclose(file);
}

//Funcao para escrever a matriz C em um arquivo .txt
void escreverArquivoMatrizC(){
 //Cria ponteiro e abre o arquivo
 FILE *file;
 file = fopen("matrizC.txt", "w+");

 //Checa se houve erro ao abrir arquivo
 if(file == NULL){
   printf("\n\nERRO AO ABRIR ARQUIVO\n");
 

 //Escreve as dimensoes da matriz no arquivo
 fprintf(file, "%d ", C.linhas);
 fprintf(file, "%d\n", C.colunas);

 //Escreve os valores da matriz no arquivo
 for(int i=0; i<C.linhas; i++){
   for(int j=0; j<C.colunas; j++){
     fprintf(file, "%f ", C.m[i][j]);
   
   fprintf(file, "\n");
 

 printf("\n    Matriz salva com sucesso\n");

 fclose(file);
}

//Funcao que multiplica as matrizes A e B, armazenando os valores na matriz C
void multiplicarMatrizAB(){
  float aux = 0;
  C.linhas = A.linhas;
  C.colunas = B.colunas;
  if((A.m[0][0] != 0)||(B.m[0][0] != 0)){
      for(int i=0; i<A.linhas; i++){
          for(int j=0; j<B.colunas; j++){
              C.m[i][j] = 0;
              for(int x=0; x<B.linhas; x++){
                  aux += A.m[i][x] * B.m[x][j];
              
              C.m[i][j] = aux;
              aux = 0;
          
      
      printf("\nMatrizes A e B multiplicadas\n");
  }else{
      printf("\nMatrizes A e B irregulares\n");
  
}

//Funcao que efetua a subtracao das matrizes A e B, armazenando os valores na matriz C
void subtrairMatrizAB(){
  if((A.linhas == B.linhas)&&(A.colunas == B.colunas)){
      C.linhas = A.linhas;
      C.colunas = A.colunas;
      for(int i=0; i<A.linhas; i++){
          for(int j=0; j<A.colunas; j++){
              C.m[i][j] = A.m[i][j] - B.m[i][j];
          
      
      printf("\nMatrizes A e B subtraidas\n");
  }else{
      printf("\nMatrizes de tamanho diferente\n");
  
}

//Funcao que efetua a soma das matrizes A e B, armazenando os valores na matriz C
void somarMatrizAB(){
  if((A.linhas == B.linhas)&&(A.colunas == B.colunas)){
      C.linhas = A.linhas;
      C.colunas = A.colunas;
      for(int i=0; i<A.linhas; i++){
          for(int j=0; j<A.colunas; j++){
              C.m[i][j] = A.m[i][j] + B.m[i][j];
          
      
      printf("\nMatrizes A e B somadas\n");
  }else{
      printf("\nMatrizes de tamanho diferente\n");
  
}

//Funcao que imprime a matriz A
void imprimirMatrizA(){
  printf("\n  MATRIZ A\n\n");
  for(int i=0; i<A.linhas; i++){
      for(int j=0; j<A.colunas; j++){
          printf("  %f  ", A.m[i][j]);
      }printf("\n");
  
}

//Funcao que imprime a matriz B
void imprimirMatrizB(){
  printf("\n  MATRIZ B\n\n");
  for(int i=0; i<B.linhas; i++){
      for(int j=0; j<B.colunas; j++){
          printf("  %f  ", B.m[i][j]);
      }printf("\n");
  
}

//Funcao que imprime a matriz C
void imprimirMatrizC(){
 //Checa se a matriz C esta regular quanto a suas dimensoes
  if((C.linhas>0)&&(C.colunas>0)){
      printf("\n  MATRIZ C\n\n");
      for(int i=0; i<C.linhas; i++){
          for(int j=0; j<C.colunas; j++){
              printf("  %f  ", C.m[i][j]);
          }printf("\n");
      
  }else{
      printf("\nMatriz irregular\n");
  
}

//Funcao que preenche a matriz A com valores aleatorios
void preencherMatrizAleatorioA(){
  float valor; //variavel que recebe valor aleatorio da funcao rand()
  int limite1, limite2; //variaveis que recebem o valor dos limites da funcao rand()

 //Le os limites da funcao rand() informados pelo usuario
 printf("\n    Valores serao de: ");
 scanf("%d", &limite1);
 printf("    Ate: ");
 scanf("%d", &limite2);

 //Preenche aleatoriamente cada termo da matriz
  for(int i=0; i<A.linhas; i++){
      for(int j=0; j<A.colunas; j++){
          valor = rand()%(limite2-limite1) + limite1;

          A.m[i][j] = valor;
      
  
  printf("\nTodos os campos de A preenchidos\n");
}

//Funcao que preenche a matriz B com valores aleatorios
void preencherMatrizAleatorioB(){
  float valor; //variavel que recebe valor aleatorio da funcao rand()
  int limite1, limite2; //variaveis que recebem o valor dos limites da funcao rand()

 //Le os limites da funcao rand() informados pelo usuario
 printf("\n   Valores serao de: ");
 scanf("%d", &limite1);
 printf("   Ate: ");
 scanf("%d", &limite2);

 //Preenche aleatoriamente cada termo da matriz
  for(int i=0; i<B.linhas; i++){
      for(int j=0; j<B.colunas; j++){
          valor = rand()%(limite2-limite1) + limite1;

          B.m[i][j] = valor;
      
  
  printf("\nTodos os campos de B preenchidos\n");
}

//Funcao que preenche a matriz A manualmente
void preencherMatrizManualA(){
  float valor; //variavel que recebe valor informado pelo usuario

 //Pede os valores de cada termo da matriz ao usuario
 if((B.linhas>0)&&(B.colunas>0)){ //Checa se as dimensoes da matriz estao regulares
  for(int i=0; i<A.linhas; i++){
      for(int j=0; j<A.colunas; j++){
          printf("    Valor[%d][%d]: ", i, j);
          scanf("%f", &valor);
          A.m[i][j] = valor;
      
  
 
}

//Funcao que preenche a matriz B manualmente
void preencherMatrizManualB(){
  float valor; //variavel que recebe valor informado pelo usuario

 //Pede os valores de cada termo da matriz ao usuario
  if((B.linhas>0)&&(B.colunas>0)){ //Checa se as dimensoes da matriz estao regulares
      for(int i=0; i<B.linhas; i++){
          for(int j=0; j<B.colunas; j++){
              printf("    Valor[%d][%d]: ", i, j);
              scanf("%f", &valor);
              B.m[i][j] = valor;
          
      
  }else{
      printf("\nTamanho da matriz B nao definido\n");
  
}

//Funcao que especifica as dimensoes da matriz A
void tamanhoMatrizA(){
  int linhas;
  int colunas;

 //Pede os valores das dimensoes da matriz ao usuario
  printf("\n    Quantidade de linhas: ");
  scanf("%d", &linhas);
  printf("    Quantidade de colunas: ");
  scanf("%d", &colunas);

 //Define as dimensoes da matriz
  A.linhas = linhas;
  A.colunas = colunas;

  printf("\nTamanho da matriz A definido\n");
}

//Funcao que especifica as dimensoes da matriz B
void tamanhoMatrizB(){
  int linhas;
  int colunas;

 //Pede os valores das dimensoes da matriz ao usuario
  printf("\n    Quantidade de linhas: ");
  scanf("%d", &linhas);
  printf("    Quantidade de colunas: ");
  scanf("%d", &colunas);

 //Define as dimensoes da matriz
  B.linhas = linhas;
  B.colunas = colunas;

  printf("\nTamanho da matriz B definido\n");
}

//Funcao que imprime o menu do sistema
/*
Essa funcao sera executada infinitamente
ate que o usuario digite o valor (16) que
corresponde a funcao (Sair)
*/
void imprimirMenu(){
  int operacao;
  printf("\nPROGRAMA DE MANIPULACAO DE MATRIZES\n");
  printf("(1) Definir o tamanho da matriz A\n");
  printf("(2) Definir o tamanho da matriz B\n");
  printf("(3) Preencher a matriz A com valores aleatorios\n");
  printf("(4) Preencher a matriz B com valores aleatorios\n");
  printf("(5) Atribuir valores manualmente para os elementos da matriz A\n");
  printf("(6) Atribuir valores manualmente para os elementos da matriz B\n");
  printf("(7) Calcular A+B\n");
  printf("(8) Calcular A-B\n");
  printf("(9) Calcular A*B\n");
  printf("(10) Imprimir matriz A\n");
  printf("(11) Imprimir matriz B\n");
  printf("(12) Imprimir matriz C\n");
  printf("(13) Ler a matriz A de um arquivo\n");
  printf("(14) Ler a matriz B de um arquivo\n");
  printf("(15) Escrever a matriz C em um arquivo\n");
  printf("(16) Sair\n");
  printf("Digite operacao: ");
  scanf("%d", &operacao);

  switch(operacao){
  case 1:
      tamanhoMatrizA();
      break;
  case 2:
      tamanhoMatrizB();
      break;
  case 3:
      preencherMatrizAleatorioA();
      break;
  case 4:
      preencherMatrizAleatorioB();
      break;
  case 5:
      preencherMatrizManualA();
      break;
  case 6:
      preencherMatrizManualB();
      break;
  case 7:
      somarMatrizAB();
      break;
  case 8:
      subtrairMatrizAB();
      break;
  case 9:
      multiplicarMatrizAB();
      break;
  case 10:
      imprimirMatrizA();
      break;
  case 11:
      imprimirMatrizB();
      break;
  case 12:
      imprimirMatrizC();
      break;
   case 13:
     lerArquivoMatrizA();
     break;
   case 14:
     lerArquivoMatrizB();
     break;
   case 15:
     escreverArquivoMatrizC();
     break;
  case 16:
      printf("\nFinalizado\n");
      exit(0); //Encerra a execucao do codigo
      break;
  default: //Informa ao usuario os digitos validos para operacoes
      printf("\nOperacao invalida. Imprima um digito entre 1 e 16\n");
      break;
  
}
