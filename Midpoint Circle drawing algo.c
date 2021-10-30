#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#define round(a)((int)a+0.5)
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 int x,y,r;
 printf("Enter the radius of circle : ");
 scanf("%d", &r);
 printf("Enter the center coordinates : ");
 scanf("%d %d", &x, &y);
 float x1,y1;
 x1=x;
 y1=r;
 int p=1-r;
 while(x1<y1)
 {
 if(p<0)
 {
 p = p+(2*x1)+1;
 x1 = x1 + 1;
 }
 else if(p>=0)
 {
 p = p+2*(x1-y1)+1;
 x1 = x1+1;
 y1 = y1-1;
 }
 putpixel(x+x1, y+y1, RED);
 putpixel(x-x1, y+y1, GREEN);
 putpixel(x+x1, y-y1, MAGENTA);
 putpixel(x-x1, y-y1, LIGHTBLUE);
 putpixel(x+y1, y+x1, CYAN);
 putpixel(x-y1, y-x1, YELLOW);
 putpixel(x+y1, y-x1, BLUE);
 putpixel(x-y1, y-x1, WHITE);
 delay(100);
 }
 circle(x,y,r);
 getch();
 closegraph();
 return 0;
}
