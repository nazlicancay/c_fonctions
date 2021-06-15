    #include <stdio.h>
    #include <stdlib.h>

    int main()
    //  Tahmin oyunu
    {
        int devam = 1;
        int tahmin;
        int sayi = 13;

        while (devam != -1){
            printf("tahmin girin : ");
            scanf("%d", &tahmin);

        while(sayi != tahmin) {

        if(tahmin > sayi){
            printf("daha kucuk sayi girin : ");
             printf("\ntahmin girin : ");
            scanf("%d", &tahmin);


        }
        else {
            printf("daha buyuk sayi girin");
            printf("\ntahmin girin : ");
            scanf("%d", &tahmin);


        }
        }
        printf("\n Tebrikler bildiniz ");
        printf("\n devam  (1) bitir (-1)");
        scanf("%d", &devam);

    }
    printf("Oyun bitti");

    }

