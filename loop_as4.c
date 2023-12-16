# include <stdio.h>
# include <math.h>
int main(){
    int productNum;
    float costPrice, quantity, profitMargin, discountrate, totalCost=0, profit, afterProfit, discount, afterDiscount, vat, finalPrice;
    float profitMarginInP, discountrateInP;
    printf("Enter the product Num: ");
    scanf("%d", &productNum);
    for(int i=1; i<=productNum; i++){
        printf("product %d\n", i);
        printf("Enter cost price: ");
        scanf("%f", &costPrice);
        printf("Enter quantity: ");
        scanf("%f", &quantity);

        totalCost += costPrice * quantity;
    }
      printf("Enter profit margin (in percentage): ");
      scanf("%f", &profitMarginInP);
      printf("Enter discount rate(in percentage): ");
      scanf("%f", &discountrateInP);
      
      profit =  (profitMarginInP/100) * totalCost;
      afterProfit = profit + totalCost;
      discount = (discountrateInP/100) * totalCost;
      afterDiscount = discount + totalCost;
      vat = afterDiscount * 0.15;
      finalPrice = afterDiscount + vat;
      
      printf("Total Cost %.2f\n", totalCost);
      printf("Profit (%.0f): %.2f\n", profitMarginInP, profit);
      printf("After Profit %.2f\n", afterProfit);
      printf("Discount (%.0f): %2f\n", discountrateInP, discount);
      printf("After Discount %.2f\n", afterDiscount);
      printf("Vat (15%%) %.2f\n", vat);
      printf("Final Selling Price: %.2f\n", finalPrice);
}