#include<stdio.h>
#include<locale.h>

int main(){

    char combustivel[1];
    double litros = 0;
    double total = 0;
    double valores[5] = {0.97, 0.96, 0.95, 0.94, 0.93};
    double valorCombus[3] = {6.3, 3.3, 2.9};

    printf("Digite quantos litros foram colocados:\n");
    scanf("%lf", &litros);
    
    printf("Digite o tipo de combustivel:\na - Alcool\ng - Gasolina\nd - Diesel\n");
    scanf("%s", &combustivel[1]);
    
    /*for(int i = 0; i < 5; i++){
        printf("[%.2lf, %d]\n", valores[i], i);
        printf("[%.2lf, %d]\n", valorCombus[i], i);
    }*/

    switch (combustivel[1]){
        case 'a': 
            if (litros <= 20.0){
                total = valores[1] * litros * valorCombus[2];
            }
            else if(litros > 20.0){
                total = valores[2] * litros * valorCombus[1];
            }
            break;
        
        case 'g':
            if(litros <= 20.0){
                total = valores[2] * litros * valorCombus[3];
            }
            else if(litros > 20.0){
                total = valores[5] * litros * valorCombus[3];
            }
            break;

        case 'd':
            if(litros <= 20.0){
                total = valores[3] * litros * valorCombus[1];
            }
            else if(litros > 20.0){
                total = valores[5] * litros * valorCombus[1];
            }
            break;

        default:
            printf("Comando nao identificado");
    }
    printf("O valor total e %.2lf", total);

    return 0;
}