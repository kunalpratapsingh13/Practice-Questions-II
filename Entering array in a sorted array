#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
     int a[20],n,item,i;
     printf("\nENTER THE SIZE OF THE ARRAY:");
     scanf("%d",&n);     
     printf("\nENTER ELEMENTS OF THE ARRAY IN SORTED ORDER:\n");
     for(i=0; i<n; i++)
     {
     scanf("%d", &a[i]);
     }
     printf("\nENTER ITEM TO BE INSERTED:");
     scanf("%d", &item);
     i = n-1;
     while(item<a[i] && i>=0)
     {
     a[i+1] = a[i];
     i--;
     }
     a[i+1] = item;
     n++;
     printf("\n\nAFTER INSERTION, ARRAY IS:\n");
     for(i=0; i<n; i++)
     {
     printf("\n%d", a[i]);
     }
     getch();
}

