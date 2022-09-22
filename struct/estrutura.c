#include <stdio.h>

struct aluno
{
    int ra;
    char nome[40],email[50],tel[20],datanascimento[11];
    

    
};

struct graduacao
{
        struct aluno tecnologo;
        struct aluno bacharelado;

};struct graduacao g;




void cadastratecnologo(){
    printf("\nEntre com o ra: ");
    scanf("%i", &g.tecnologo.ra);

    printf("\nEntre com o nome: ");
    scanf("%s",g.tecnologo.nome);

    printf("\nEntre com o email: ");
    scanf("%s",g.tecnologo.email);

    pritn("\nEntre com o telefone: ");
    scan("%s",g.tecnologo.tel);

    printf("\nEntre com a data de nascimento: ");
    scanf("%s",g.tecnologo.datanascimento);
}

void exibetecnologo(){
    printf("\nRa: %i",g.tecnologo.ra);
    printf("\nNome: %s",g.tecnologo.nome);
    printf("\nEmail %s",g.tecnologo.email);
    printf("\ntelefone: %s",g.tecnologo.tel);
    printf("\n Data de nascimento: %s",g.tecnologo.datanascimento);
}

int main(){
    cadastratecnologo();
    exibetecnologo();
}



