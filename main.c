#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/* Defina uma estrutura Medalha contendo: Código (contador inteiro), Gênero (char),
Modalidade(string), Cidade(string), Ano(int), Tipo Medalha GBS(char), Nome
Atleta(string), Pais Origem (string), Resultado (?). Deverá permitir cadastrar
(inserir/listar/pesquisar/alterar/excluir) as medalhas obtidas por cada atleta. Essa relação
deve aumentar e diminuir dinamicamente;
*/

typedef struct
{
    int codigo;
    char genero;
    char modalidade[30];
    char cidade[30];
    int ano;
    char tipo_medalha[10];
    char nome_atleta[50];
    char pais[20];
    //resultado

} Medalha;

int main(){

    FILE* arq1;

    arq1 = fopen("../medalhas.csv", "r");
    if(arq1 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }
    int contaletras = 0;

    int c;
    while((c = getc(arq1)) != EOF){
        contaletras++;
    }


    return 0;
}



