#ifndef _head_H
#define _head_H
#include <stdio.h>
struct items{
    char item[20];
    float price;
    int qty;
};

struct orders{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};
float total;
    int opt,n;
    struct orders ord;
    struct orders order;
    char saveBill = 'y',contFlag ='y';
    char name[50];
    FILE *fp;

    float total = 0;
int invoiceFound = 0;

void ShowAllInvoices(); void Exit(); void SearchInvoice(); void GenerateInvoice();
#endif