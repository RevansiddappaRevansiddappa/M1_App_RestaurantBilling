#include "../inc/Header.h"
void GenerateInvoice()
{
printf("\nPlease enter the name of the customer:\t");
    fgets(ord.customer,50,stdin);
    ord.customer[strlen(ord.customer)-1] = 0;
    strcpy(ord.date,__DATE__);
    printf("\nPlease enter the number of items:\t");
    scanf("%d",&n);
    ord.numOfItems = n;
    for(int i=0;i<n;i++){
        fgetc(stdin);
        printf("\n\n");
        printf("Please enter the item %d:\t",i+1);
        fgets(ord.itm[i].item,20,stdin);
        ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
        printf("\nPlease enter the quantity:\t");
        scanf("%d",&ord.itm[i].qty);
        printf("\nPlease enter the unit price:\t");
        scanf("%f",&ord.itm[i].price);
        total += ord.itm[i].qty * ord.itm[i].price;
}

generateBillHeader(ord.customer, ord.date);
for(int i=0;i<ord.numOfItems;i++)
{
    generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);
}
generateBillFooter(total);
printf("\nDo you want to save the invoice [y/n]:\t");
scanf("%s",&saveBill);
if(saveBill == 'y'){
    fp = fopen("RestaurantBill.dat","a+");
    fwrite(&ord,sizeof(struct orders),1,fp);
    if(fwrite != 0)
    printf("\nSuccessfully saved");
    else
    printf("\nError saving");
    fclose(fp);
}
}