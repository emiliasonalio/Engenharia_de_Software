#include<stdio.h>
#include<locale.h>

int main(){

    int combustivel;
    float litros;
    float total;

    printf("Digite quantos litros foram colocados:\n");
    scanf("&lf", &litros);
    
    printf("Digite o tipo de combustrivel:\n1 - Alcool\n2 - Gasolina\n3 - Diesel\n");
    scanf("%d", &combustivel);
    

    switch (combustivel){
        case 1: 
            if (litros <= 20){
                total = 1,03 * litros* 3.3;
                printf("o valor total eh %.2f", total);
            }
            else if(litros > 20){
                total = 1,05 * litros * 3.3;
                printf("o valor total eh %.2f", total);
            }
            break;
        
        case 2:
            if(litros <= 20){
                total = 1,04 * litros * 2.9;
                printf("o valor total eh %.2f", total);
            }
            else if(litros > 20){
                total = 1,06 * litros * 2.9;
                printf("o valor total e %.2f", total);
            }
            break;

        case 3:
            if(litros <= 20){
                total = 1,05 * litros * 6.3;
                printf("o valor total e %.2f", total);
            }
            else if(litros > 20){
                total = 1,07 * litros * 6.3;
                printf("o valor total e %.2f", total);
            }
            break;

        //default:
          //  printf("Comando nao identificado");
    }

    return 0;
}