#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
 int gd=DETECT, gm;
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 int xwmin,xwmax,ywmin,ywmax,xvmin,xvmax,yvmin,yvmax;
 //coordinates for window
 printf("Enter the xwmin and xwmax for windows :\n ");
 scanf("%d %d", &xwmin, &xwmax);
 printf("Enter the ywmin and ywmax for windows :\n ");
 scanf("%d %d", &ywmin, &ywmax);
 rectangle(xwmin,ywmin,xwmax,ywmax);
 outtextxy(xwmin-10, ywmax, "Window");
 //coordinates for viewport
 printf("Enter the xvmin and xvmax for viewport :\n ");
 scanf("%d %d", &xvmin, &xvmax);
 printf("Enter the yvmin and yvmax for viewport :\n ");
 scanf("%d %d", &yvmin, &yvmax);
 setcolor(GREEN);
 rectangle(xvmin,yvmin,xvmax,yvmax);
 outtextxy(xvmin-10, xvmax, "Viewport");
 //coordinates of line in windows
 int xw1,xw2,yw1,yw2;
 printf("Enter the starting coordinates of line for window :\n ");
 scanf("%d %d", &xw1,&yw1);
 printf("Enter the ending coordinates of line for window :\n ");
 scanf("%d %d", &xw2,&yw2);
 setcolor(CYAN);
 line(xw1,yw1,xw2,yw2);
 int sx,sy,xv1,xv2,yv1,yv2;
 //scaling factor
 sx = (xvmax-xvmin)/(xwmax-xwmin);
 sy = (yvmax-yvmin)/(ywmax-ywmin);
 //coordinates of line in viewport
 xv1 = xvmin + (xw1-xwmin)*sx;
 xv2 = xvmin + (xw2-xwmin)*sx;
 yv1 = yvmin + (yw2-ywmin)*sy;
 yv2 = yvmin + (yw2-ywmin)*sy;
 printf("The starting coordinates of line in viewport is : %d %d \n", xv1,yv1);
 printf("The ending coordinates of line in viewport is : %d %d \n", xv2,yv2);
 setcolor(RED);
 line(xv1,yv1,xv2,yv2);
 getch();
 closegraph();
}
