#include <stdio.h>

int main (){
    float sal, rea, aum;
    int perc;

    printf("Insira seu salario: ");
    scanf("%f", &sal);

    if (sal <= 280)
    {
        perc = 20;
        rea = sal * 1.20;
        aum = rea - sal;
        //rea = sal + (sal*0.2);
    } else if(sal >280 && sal <= 700){
        perc = 15;
        rea = sal * 1.15;
        aum = rea - sal;
    } else if (sal > 700 && sal <= 1500){
        perc = 10;
        rea = sal * 1.10;
        aum = rea - sal;
    } else {
        perc = 5;
        rea = sal * 1.05;
        aum = rea - sal;
    }
    
    
    printf("Salario antes do reajuste %0.2f\n", sal);
    printf("O percentual aplicado foi %d\n", perc);
    printf("O valor do reajuste foi %0.2f\n", aum);
    printf("Salario depois do reajuste %0.2f\n", rea);

    return 0;

}