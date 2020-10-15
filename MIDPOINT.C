#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#define Round(a) ((int)a+0.5)
void mid_circle(int xc,int yc,int rad)
//x & y center & radius ==midpoint circle algo
{
int x=0,y=rad;
int p=1-rad;
void point_plot(int,int,int,int);

point_plot(xc,yc,x,y);

while(x<y)
{
x++;
if (p<0) p+=2*x+1;
else {
y--;
p+=2*x-2*y+1;
}
point_plot(xc,yc,x,y);
}
}
void point_plot(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
}

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
mid_circle(60,60,30);
mid_circle(50,60,5);
mid_circle(70,60,5);
mid_circle(60,70,5);
mid_circle(60,140,50);
mid_circle(60,120,10);
mid_circle(60,140,10);
mid_circle(60,160,10);

getch();
return 0;
}
