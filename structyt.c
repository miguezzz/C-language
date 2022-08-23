#include <stdio.h>


int main(void) {

   struct horario
    {
        int horas;
        int minutos;
        int segundos;

    };

    struct horario agora;

    agora.horas = 17;
    agora.minutos = 45;
    agora.segundos = 15;

    printf("%d horas, %d minutos e %d segundos\n", agora.horas, agora.minutos, agora.segundos);

    struct horario depois;

    depois.horas = agora.horas + 1;
    depois.minutos = agora.minutos + 15;
    depois.segundos = agora.segundos + 45;

    printf("%d horas, %d minutos e %d segundos\n", depois.horas, depois.minutos, depois.segundos);

    return 0;
}