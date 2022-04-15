// wap to build  a restaurant menu
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,t=0,l,x;
 char n[20];
 float cgst, gst,dis,gt;
 clrscr();
 printf("\n ********** PUBG hotel ************");
 printf("\n     ------- menu ----------");
 printf("\n 0 = chicken biriyani \n 1= mutton biriyani \n 2=prawns biriyani ");
 printf("\n 3=family pack \n 4=icecreams ");
 printf("\n\n enter u r name : ");
 scanf("%s",&n);
 printf("\n no of items u r going to buy :");
 scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
    printf("\n\n add  items :-  ");
    scanf("%d",&l);
    switch(l)
 {
   case 0 : printf("\n Chicken biriyani ");
	   t+=250;
	   break;
   case 1 : printf("\n Mutton biriyani ");
	   t+=354;
	   break;
   case 2 : printf("\n Prawans biriyani ");
	   t+=300;
	   break;
   case 3 : printf("\n Family pack  ");
	   t+=650;
	   break;
   case 4 : printf("\n ICE-CREAMS ");
	   t+=120;
	   break;
   default :
	printf("\n the items u enterd is overed for to day plz come tomorrow");
    }
 }
  cgst = 0.05*(t);
  gst  = 0.12*(t);
  dis  = 0.3*(t);
  gt=cgst+gst+t-dis;
  printf("\n ================================");
  printf("\n --------your bill--------------");
  printf("\n total amount  = %d",t);
  printf("\n cgst tax      = %0.2f",cgst);
  printf("\n gst tax       = %0.2f",gst);
  printf("\n grand total amount to pay by coustomer   = %0.2f",gt);
  printf("\n =================================");
  printf("\n \t    %s thanks for coming ",n);
  printf("\n \t\t  visit us again ");
  printf("\n \t\t *****************");
  getch();
}