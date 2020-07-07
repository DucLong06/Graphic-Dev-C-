#include<graphics.h>
#include<conio.h>
#include<dos.h>

using namespace std;

int Round(float y)
{
	return y+0.5;
}

int main()
{
//	int g = DETECT, gmode;
//	initgraph(&g,&gmode,"");

	initwindow(600,600);
	
//	putpixel(0,0,4);

	int x1,x2,y1,y2;
	
	x1 =0;
	y1=0;
	x2=100;
	y2=150;
	
	int x =x1;
	float m =(float)(y2-y1)/(x2-x1);
	float b = y1-m*x1;
	
	while (x<x2)
	{
		float y= m*x+b;
		putpixel(x,Round(y),4);
		x++;
	}
	
	getch();
	
	closegraph();
	
	return 0;
}

