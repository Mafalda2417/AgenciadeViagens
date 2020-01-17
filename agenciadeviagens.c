#include <stdio.h>

int main(){;
    int pacote;
    int viagens;
    int hotel;
    int aluguer;
    int tarifa;
    int pessoas;
    int quarto;
    int dias;
    int destino;
    float total;
    float total1;
    float totalpacote;
    float totalpacote1;

    printf("Agência de Viagens: FRAGOLARINHARCELALDALOURAPACHECO\n");
    printf("Pacote:\n1- Viagem + Hotel\n2- Hotel + Aluguer\n3- Viagem + Aluguer\n4- Viagem + Hotel + Aluguer\n");
    scanf("%d", &pacote);

    switch (pacote)
    {
    case 1:
        printf("Destino da Viagem?\n1- Lisboa\n2- Porto\n3- Rabo de Peixe\n");
        scanf("%d", &destino);
        if(destino == 1){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.3;
            total1 = (620*pessoas) + total;  
            printf("Preço da Viagem:%.2f€\n", total1);
        }else if(destino == 2){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.26;
            total1 = (620*pessoas) + total;
            printf("Preço da Viagem:%.2f€\n", total1);
        }else if(destino == 3){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.96;
            total1 = (620*pessoas) - total;
            printf("Preço da Viagem:%.2f€\n", total1);
        }
        printf("Hotel?\n1- Tivoli Lisboa\n2- Universidade do Porto\n3- Carangueijo\n");
        scanf("%d", &hotel);
        if(hotel == 1){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.2;
            total1 = ((40*dias) + (40*pessoas)) + total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }else if(hotel == 2){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.15;
            total1 = ((40*dias) + (40*pessoas)) + total;
            printf("Preço da Hotel:%.2f€", total1);
        }else if(hotel == 3){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.94;
            total1 = ((40*dias) + (40*pessoas)) - total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }
        totalpacote = (destino + hotel) * 0.15;
        totalpacote1 = (destino + hotel) - totalpacote;
        printf("Total do pacote:%.2f\n", totalpacote1);
    
    case 2:
        printf("Hotel?\n1- Tivoli Lisboa\n2- Universidade do Porto\n3- Carangueijo\n");
        scanf("%d", &hotel);
        if(hotel == 1){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.2;
            total1 = ((40*dias) + (40*pessoas)) + total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }else if(hotel == 2){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.15;
            total1 = ((40*dias) + (40*pessoas)) + total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }else if(hotel == 3){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.94;
            total1 = ((40*dias) + (40*pessoas)) - total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }
        printf("Aluguer?\n1- Europcar\n2- Altis\n3- Carroça\n");
        scanf("%d", &aluguer);
        if(aluguer == 1){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.15;
            total1 = (29*dias) + total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }else if(aluguer == 2){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.16;
            total1 = (29*dias) + total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }else if(aluguer == 3){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.98;
            total1 = (29*dias) - total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }
        totalpacote = (destino + hotel) * 0.05;
        totalpacote1 = (destino + hotel) - totalpacote;
        printf("Total do pacote:%.2f\n", totalpacote1);

    case 3:
        printf("Destino da Viagem?\n1- Lisboa\n2- Porto\n3- Rabo de Peixe\n");
        scanf("%d", &destino);
        if(destino == 1){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.3;
            total1 = (620*pessoas) + total;  
            printf("Preço da Viagem:%.2f€\n", total1);
        }else if(destino == 2){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.26;
            total1 = (620*pessoas) + total;
            printf("Preço da Viagem:%.2f€\n", total1);
        }else if(destino == 3){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.96;
            total1 = (620*pessoas) - total;
            printf("Preço da Viagem:%.2f€\n", total1);
        }
        printf("Aluguer?\n1- Europcar\n2- Altis\n3- Carroça\n");
        scanf("%d", &aluguer);
        if(aluguer == 1){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.15;
            total1 = (29*dias) + total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }else if(aluguer == 2){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.16;
            total1 = (29*dias) + total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }else if(aluguer == 3){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.98;
            total1 = (29*dias) - total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }
        totalpacote = (destino + aluguer) * 0.075;
        totalpacote1 = (destino + aluguer) - totalpacote;
        printf("Total do pacote:%.2f\n", totalpacote1);

    case 4:
        printf("Destino da Viagem?\n1- Lisboa\n2- Porto\n3- Rabo de Peixe\n");
        scanf("%d", &destino);
        if(destino == 1){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.3;
            total1 = (620*pessoas) + total;  
            printf("Preço da Viagem:%.2f€\n", total1);
        }else if(destino == 2){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.26;
            total1 = (620*pessoas) + total;
            printf("Preço da Viagem:%.2f€\n", total1);
        }else if(destino == 3){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            total = (620*pessoas) * 0.96;
            total1 = (620*pessoas) - total;
            printf("Preço da Viagem:%.2f€\n", total1);
        }
        printf("Hotel?\n1- Tivoli Lisboa\n2- Universidade do Porto\n3- Carangueijo\n");
        scanf("%d", &hotel);
        if(hotel == 1){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.2;
            total1 = ((40*dias) + (40*pessoas)) + total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }else if(hotel == 2){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.15;
            total1 = ((40*dias) + (40*pessoas)) + total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }else if(hotel == 3){
            printf("Número de Pessoas?\n");
            scanf("%d", &pessoas);
            printf("Número de Dias?\n");
            scanf("%d", &dias);
            total = ((40*dias) + (40*pessoas)) * 0.94;
            total1 = ((40*dias) + (40*pessoas)) - total;
            printf("Preço da Hotel:%.2f€\n", total1);
        }
        printf("Aluguer?\n1- Europcar\n2- Altis\n3- Carroça\n");
        scanf("%d", &aluguer);
        if(aluguer == 1){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.15;
            total1 = (29*dias) + total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }else if(aluguer == 2){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.16;
            total1 = (29*dias) + total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }else if(aluguer == 3){
            printf("Número de Dias?\n");
            scanf("%d", &aluguer);
            total = (29*dias) * 0.98;
            total1 = (29*dias) - total;
            printf("Preço do Aluguer:%.2f€\n", total1);
        }
        totalpacote = (destino + hotel + aluguer) * 0.25;
        totalpacote1 = (destino + hotel + aluguer) - totalpacote;
        printf("Total do pacote:%.2f\n", totalpacote1);

    default:
        break;
    }


}