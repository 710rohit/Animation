#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,j,x,y,k;
initgraph(&gd,&gm,"c:\\tc\\bgi\\");

for(i=0;i<300;i++)
{
arc(300,200,150,30,270);     line(0,58,600,58);
ellipse(200,420,0,360,30,10);  line(0,57,600,57);
ellipse(250,440,0,360,30,10);                    line(0,56,600,56);
ellipse(300,430,0,360,30,10);              line(0,55,600,55);
ellipse(360,430,0,360,30,10);                line(0,54,600,54);
ellipse(300,450,0,360,30,10);
ellipse(410,430,0,360,20,10);
ellipse(150+i,200,0,360,60,30); line(170+i,173,170+i,227);
line(150+i,170,130+i,150);     circle(185+i,190,3);
line(130+i,150,130+i,170);     line(208+i,201,191+i,201);
line(90+i,200,60+i,180);        ellipse(400-i,300,0,360,40,20);
				line(440-i,300,460-i,280);
line(90+i,200,60+i,220);        line(440-i,300,460-i,320);
line(60+i,180,60+i,220);        line(460-i,280,460-i,320);
line(390-i,280,390-i,320);
	   circle(380-i,300,3);
circle(250,340-i,5); circle(270,420-i,5);circle(270+i,380,5);circle(310,400-i,5);
circle(310,360+i,5);circle(350,400+i,5);circle(350,320-i,5);circle(350-i,300,5);
circle(300,280-i,5);                 circle(315+i,100,5);circle(330,200-i,5);
  circle(250,100-i,5);   circle(250,420+i,5);   circle(255,255-i,5);
  circle(375,400-i,5);
  circle(150,150+i,5);
  circle(200,240+i,5);circle(230,300+i,5);
  setcolor(i);

x=getmaxx();
y=getmaxy();
for(k=0;k<50;k++)
{
outtextxy(random(x+200),random(y-50),"*");

}  delay(100);
cleardevice();
       }
getch();
closegraph();
}