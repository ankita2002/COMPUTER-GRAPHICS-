#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawline(int x1,int y1,int x2,int y2)
{
int dx=abs(x1-x2),dy=abs(y1-y2);
int p= 2*dy-dx;
int dy2 = 2*dy, dydx2= 2*(dy-dx);
int x,y,xend;

if(x1>x2)
{
x=x2;
y=y2;
xend=x1;
}
else
{
x=x1;
y=y1;
xend=x2;
}
putpixel(x,y,WHITE);

while(x<xend)
{
x++;
if(p<0)
p+=dy2;
else
{
y++;
p+=dydx2;
}
putpixel(x,y,WHITE);
}
}

int main()
{
int gdriver=DETECT,gmode,error,x1,y1,x2,y2;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
printf("Enter co-ordinates of first point: ");
scanf("%d%d",&x1,&y1);
printf("Enter co=ordinates of second point: ");
scanf("%d%d",&x2,&y2);
drawline(x1,y1,x2,y2);
getch();
return 0;
}
