#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Header.h"

// Functions to generate bills
void generateBillHeader(char name[50], char date[30]){
    printf("\n\n");
    printf("\t   ADV. Restaurant");
    printf("\n\t  -----------------");
    printf("\nDate: %s",date);
    printf("\nInvoice To: %s",name);
    printf("\n");
    printf("---------------------------------------\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n---------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30], int qty, float price){
    printf("%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty * price);
    printf("\n");
}
void generateBillFooter(float total){
   printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal + 2*cgst;
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n-----------------------------------");
    printf("\nGrand Total\t\t\t%.2f",grandTotal);
    printf("\n------------------------------------\n");
}
int main(){
    
//dashboard
while(contFlag == 'y'){
system("cls");
float total = 0;
int invoiceFound = 0;
printf("\t=============ADV. RESTAURANT=============");
printf("\n\nPlease select your prefered operation:\t");
printf("\n\n1.Generate Invoice");
printf("\n2.Show all Invoices");
printf("\n3.Search Invoice");
printf("\n4.Exit");
printf("\n\nYour choice:\t");
scanf("%d",&opt);
fgetc(stdin);
switch(opt){
    case 1: GenerateInvoice();
    break;
    case 2: ShowAllInvoices();
    break;
    case 3: SearchInvoice();
    break;
    case 4: Exit();
    break;
    default:
 printf("Sorry invalid option");
 break;

}
printf("\nDo you want to perform another operation?[y/n]:\t");
scanf("%s",&contFlag);
}
printf("\n\t\t Bye Bye :)\n\n");
printf("\n\n");
return 0;
}





