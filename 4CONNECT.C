#include<stdio.h>
#include<graphics.h>
void boundary_fill(int x, int y,int boundary_color,int fill_color);
int main()
{
 int gd,gm,x,y,x1,x2,y1,y2,rad;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C://TURBOC3///BGI");

 printf("Enter x,y coordinates: ");
 scanf("%d%d",&x1,&y1);
 printf("Enter Radius: ");
 scanf("%d%d",&rad);

 setcolor(WHITE);
 circle(x1,y1,rad);
 boundary_fill(x1+1,y1+1,15,4);

 getch();
 closegraph();
 return 0;
 }

 void boundary_fill(int x,int y,int boundary_color,int fill_color)
 {
  int current ;
  current=getpixel(x,y);
  if(current!=boundary_color && current!=fill_color)
  {
  putpixel(x,y,fill_color);
  delay(10);
  boundary_fill(x+1,y,boundary_color,fill_color);
  boundary_fill(x,y+1,boundary_color,fill_color);
  boundary_fill(x-1,y,boundary_color,fill_color);
  boundary_fill(x,y-1,boundary_color,fill_color);
  }
  }