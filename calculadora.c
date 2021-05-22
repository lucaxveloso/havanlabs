#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL,"portuguese");
int valor, valor2;
float real, dolar, libra, euro, peso, cota, taxa, total;

do{
    printf("Qual sua moeda de origem?   >>> 1- Real 2- Dolar 3- Libra 4- Euro 5- Peso <<<\n >>>");
    scanf("%d", &valor);
}
while(valor < 1 || valor > 5);

    switch(valor){

        case 1:
            do{
                printf("Qual sua moeda de destino? >>> 1- Dolar 2- Libra 3- Euro 4- Peso <<<\n >>>");
                scanf("%d", &valor2);
            }
            while(valor2 < 1 || valor2 > 4);

                switch(valor2){
                    case 1:
                    printf("Quantos reais você quer trocar?\n >>>");
                    scanf("%f", &real);

                    dolar = 0.19;
                    cota = real * dolar;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f dolares. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 2:
                    printf("Quantos reais você quer trocar?\n >>>");
                    scanf("%f", &real);

                    libra = 0.13;
                    cota = real * libra;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;
                    printf("Você irá receber %.2f libras. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 3:
                    printf("Quantos reais você quer trocar?\n >>>");
                    scanf("%f", &real);

                    euro = 0.16;
                    cota = real * euro;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f euros. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 4:
                    printf("Quantos reais você quer trocar?\n >>>");
                    scanf("%f", &real);

                    peso = 17.75;
                    cota = real * peso;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.3f pesos. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    default :
                   printf ("error\n");

                }

            break;

        case 2:
             do{
                printf("Qual sua moeda de destino? >>> 1- Real 2- Libra 3- Euro 4- Peso <<<\n >>>");
                scanf("%d", &valor2);
             } while (valor2 < 1 || valor2>4);
               switch(valor2){
                    case 1:
                    printf("Quantos doláres você quer trocar?\n >>>");
                    scanf("%f", &dolar);

                    real = 5,27;
                    cota = dolar * real;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f reais. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 2:
                    printf("Quantos dolares você quer trocar\n >>>?");
                    scanf("%f", &dolar);

                    libra = 0.71;
                    cota = dolar * libra;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f libras. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 3:
                    printf("Quantos dolares você quer trocar?\n >>>");
                    scanf("%f", &dolar);

                    euro = 0.82;
                    cota = dolar * euro;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f euros. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 4:
                    printf("Quantos dolares você quer trocar?\n >>>");
                    scanf("%f", &dolar);

                    peso = 93,93;
                    cota = dolar * peso;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.3f pesos. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    default :
                   printf ("error\n");

                }

            break;

        case 3:
            do{
                printf("Qual sua moeda de destino? >>> 1- Real 2- Dolar 3- Euro 4- Peso<<<\n >>>");
                scanf("%d", &valor2);
            } while (valor2 < 1 || valor2>4);
                switch(valor2){
                    case 1:
                    printf("Quantas libras você quer trocar?\n >>>");
                    scanf("%f", &libra);

                    real = 7,43 ;
                    cota = libra * real;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f reais. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 2:
                    printf("Quantos libras você quer trocar?\n >>>");
                    scanf("%f", &libra);

                    dolar = 1.41;
                    cota = libra * dolar;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f dolares. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 3:
                    printf("Quantos libras você quer trocar?\n >>>");
                    scanf("%f", &libra);

                    euro = 1.16;
                    cota = libra * euro;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f euros. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 4:
                    printf("Quantos libras você quer trocar?\n >>>");
                    scanf("%f", &libra);

                    peso = 132.44;
                    cota = libra * peso;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.3f pesos. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    default :
                   printf ("error\n");

                }

            break;

        case 4:
            do{
                printf("Qual sua moeda de destino?  >>> 1- Real 2- Dolar 3- Libra 4- Peso <<<\n >>>");
                scanf("%d", &valor2);
            } while (valor2 < 1 || valor2>4);
                switch(valor2){
                    case 1:
                    printf("Quantos euros você quer trocar?\n >>> ");
                    scanf("%f", &euro);

                    real = 6.40;
                    cota = euro * real;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f reais. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 2:
                    printf("Quantos euros você quer trocar?\n >>> ");
                    scanf("%f", &euro);

                    dolar = 1.21;
                    cota = euro * dolar;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f dolares. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 3:
                    printf("Quantos euros você quer trocar?\n >>>");
                    scanf("%f", &euro);

                    libra = 0.86;
                    cota = euro * libra;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f libras. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 4:
                    printf("Quantos euros você quer trocar?\n >>>");
                    scanf("%f", &euro);

                    peso = 114.08;
                    cota = euro * peso;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.3f pesos. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    default :
                   printf ("error\n");

                }

            break;

        case 5:
            do {
                printf("Qual sua moeda de destino? >>> 1- Real 2- Dolar 3- Libra 4- Euro <<<\n >>>");
                scanf("%d", &valor2);
             } while (valor2 < 1 || valor2>4);
                switch(valor2){
                    case 1:
                    printf("Quantos pesos você quer trocar?\n >>>");
                    scanf("%f", &peso);

                    real = 0.056;
                    cota = peso * real;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f reais. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 2:
                    printf("Quantos pesos você quer trocar?\n >>>");
                    scanf("%f", &peso);

                    dolar = 0.011;
                    cota = peso * dolar;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f dolares. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 3:
                    printf("Quantos pesos você quer trocar?\n >>>");
                    scanf("%f", &peso);

                    libra = 0.0076;
                    cota = peso * libra;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f libras. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    case 4:
                    printf("Quantos pesos você quer trocar?\n >>>");
                    scanf("%f", &peso);

                    euro = 0.0088;
                    cota = peso * euro;
                    taxa = (cota * 10)/100;
                    total= cota - taxa;

                    printf("Você irá receber %.2f euros. >> Taxa de cotação já descontada!! <<", cota, total);
                    break;

                    default :
                   printf ("error\n");

                }


            break;

    default :
    printf ("Moeda invalida!\n");

    }






}
