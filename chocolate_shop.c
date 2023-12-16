#include <stdio.h>
int main(){
    printf("Junaed's chocolate shop:\n");
    printf("What type of chocolate it is?");
    char choc_type;
    int bat_num;
    for(int i=1; i<=5; i++){
        printf("Enter M/m for milk chocolate and W/w for white chocolate: ");
        scanf(" %c", &choc_type);
        printf("Enter the num of chocolates in this batch: ");
        scanf("%d", &bat_num);

        if(choc_type == 'M' || choc_type == 'm' && bat_num>=20 && bat_num<=24){
               printf("Mini Pack\n");
               printf("Price 120");
        }else if(choc_type =='M' || choc_type == 'm' && bat_num>=25 && bat_num<=29){
               printf("Small pack\n");
               printf("Price 150");
        }else if(choc_type == 'M' || choc_type == 'm' && bat_num>=30 && bat_num<=34){
               printf("Regular Pack\n");
               printf("Price 200");
        }else if(choc_type == 'M' || choc_type == 'm' && bat_num>=35 && bat_num<=40){
               printf("Mega pack\n");
               printf("Price 250");
        }
        if(choc_type == 'W' || choc_type == 'w' && bat_num>=35 && bat_num<=40){
               printf("Mega pack\n");
               printf("Price %.2f\n", 0.25* 250 + 250);
        }else if(choc_type == 'W' || choc_type == 'w' && bat_num>=30 && bat_num<=34){
               printf("Regular pack\n");
               printf("Price %.2f\n", 0.25* 200 + 200);
        }else{
            printf("Error in production Line\n");
            printf("Price 0\n");
        }
    }
}