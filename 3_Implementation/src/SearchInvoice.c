#include "../inc/Header.h"
void SearchInvoice()
{
printf("\nEnter the name of the customer:\t");
//fgetc(stdin);
fgets(name,50,stdin);
name[strlen(name)-1] = 0;
system("cls");
fp = fopen("RestaurantBill.dat","r");
printf("\t*****Invoice of %s*****",name);
while(fread(&order,sizeof(struct orders),1,fp)){
    float tot = 0;
    if(!strcmp(order.customer,name)){
generateBillHeader(order.customer,order.date);
    for(int i=0;i<order.numOfItems;i++){
        generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
        tot +=order.itm[i].qty * order.itm[i].price;
    }
    generateBillFooter(tot);
    invoiceFound = 1;
    }
    
    }
    if(invoiceFound==0){
        printf("Sorry the invoice for %s does not exists",name);
    }
fclose(fp);
}
