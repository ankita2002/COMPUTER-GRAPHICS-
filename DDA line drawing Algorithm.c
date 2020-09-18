#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>

#define Round(a) ((int)a+0.5)

void lineDDA(int xa,int ya,int xb,int yb)
{
int dx=xb-xa,dy=yb-ya,steps,k;
float xincrement,yincrement,x=xa,y=ya;

if(abs(dx)>abs(dy))
 steps = abs(dx);
else
steps= abs(dy);

xincrement = dx/(float)steps;
yincrement = dy/(float)steps;

putpixel(Round(x),Round(y),WHITE);
for(k=0;k<steps;k++) {
x += xincrement;
y += yincrement;
putpixel(Round(x),Round(y),WHITE);
}
}
int main()
{
int gd=DETECT ,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
lineDDA(200,200,1400,1600);
getch();
return 0;
}
