
#include <stdio.h>
#include <stdlib.h>

int main()
//  Girilen ayýn kaç gün olduðunu veren program


{
    int ay ;
    printf(" Ay no gir : ");
    scanf("%d",&ay);

    while(ay<1|| ay>12){
        printf("HATA , ");
        printf("Tekrar gir : ");
        scanf("%d",&ay);

    }


    switch(ay){
        printf("%d",ay);
        case 1 : printf("1.ay 31 gun icerir");break;
        case 2 : printf("2.ay 28/29 gun icerir");break;
        case 3 : printf("3. ay 31 gun icerir");break;
        case 4 : printf("4.ay 30 gun icerir ");break;
        case 5 : printf("5.ay 31 gun icerir");break;
        case 6 : printf("6. ay 30 gun icerir");break;
        case 7 : printf("7.ay 31 gun icerir");break;
        case 8 : printf("8. ay 31  gun icerir");break;
        case 9 : printf("9. ay 30  gun icerir");break;
        case 10 : printf("10. ay 31  gun icerir");break;
        case 11 : printf("11. ay 30  gun icerir");break;
        case 12 : printf("12. ay 31  gun icerir");break;


    }




    return 0;
}
