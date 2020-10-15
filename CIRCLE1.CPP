#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line(150,100,50,200);
line(150,100,350,100);
line(150,100,300,200);
line(300,200,400,200);
line(340,100,500,200);
line(60,200,300,200);
rectangle(150,250,230,400);
rectangle(300,200,500,400);
circle(100,300,25);
rectangle(360,300,450,250);
rectangle(45,400,300,200);

getch();
closegraph();
}