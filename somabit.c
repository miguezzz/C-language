#include <stdio.h>
#include <math.h>

int main(void) {

    double A, B, C, R1, R2, delta;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &A);

    printf("Digite o primeiro valor: ");
    scanf("%lf", &B);

    printf("Digite o primeiro valor: ");
    scanf("%lf", &C);

    delta = (B * B) - 4 * A * C;
    R1 = -B + sqrt(delta) / (2 * A);
    R2 = -B - sqrt(delta) / (2 * A);
    
    if(delta >= 0 && A != 0)
    {   
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf", R2);
    }
    else
        printf("Impossivel calcular");

return 0;
}

#include <stdio.h>

#include<math.h>




int main() {

double A, B, C, delta;

scanf("%lf %lf %lf", &A, &B, &C);

delta = (B*B)-4*A*C;

if (delta >= 0 && A!=0) {

printf("R1 = %.5lf\n", ((B*-1) + sqrt(delta)) / (2*A));

printf("R2 = %.5lf\n", ((B*-1) - sqrt(delta)) / (2*A));

} else {

printf("Impossivel calcular\n");

}




return 0;

}


#include <stdio.h>
#include <math.h>

int main(void) {

    double A, B, C, R1, R2, delta;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &A);

    printf("Digite o primeiro valor: ");
    scanf("%lf", &B);

    printf("Digite o primeiro valor: ");
    scanf("%lf", &C);


    
    if(delta >= 0 && A != 0)
    {   
        printf("R1 = %.5lf\n", (-B + sqrt((B * B) - 4 * A * C)));
        printf("R2 = %.5lf", (-B - sqrt((B * B) - 4 * A * C)));
    }
    else
        printf("Impossivel calcular");

return 0;
}