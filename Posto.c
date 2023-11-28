#include<stdio.h>
#include<locale.h>

int main(){

    char combustivel[1];
    float litros;
    float total;

    printf("Digite quantos litros foram colocados:\n");
    scanf("%f", &litros);
    
    printf("Digite o tipo de combustrivel:\na - Alcool\ng - Gasolina\nd - Diesel\n");
    scanf("%s", &combustivel[1]);
    

    switch (combustivel[1]){
        case 'a': 
            if (litros <= 20){
                total = 1.03 * litros* 3.3;
                printf("o valor total eh %.2f", total);
            }
            else if(litros > 20){
                total = 1.05 * litros * 3.3;
                printf("o valor total eh %.2f", total);
            }
            break;
        
        case 'g':
            if(litros <= 20){
                total = 1.04 * litros * 2.9;
                printf("o valor total eh %.2f", total);
            }
            else if(litros > 20){
                total = 1.06 * litros * 2.9;
                printf("o valor total e %.2f", total);
            }
            break;

        case 'd':
            if(litros <= 20){
                total = 1.05 * litros * 6.3;
                printf("o valor total e %.2f", total);
            }
            else if(litros > 20){
                total = 1.07 * litros * 6.3;
                printf("o valor total e %.2f", total);
            }
            break;

        default:
            printf("Comando nao identificado");
    }

    return 0;
}