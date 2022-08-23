#include <stdio.h>

int main(void) {

     struct Aluno 
    {
        char nome[40];
        int matricula;
        


    };

    struct Aluno Victor;

    Victor.matricula = 20220;

printf("%d", Victor.matricula);

return 0;
}