#include <stdio.h>
#include "windows.h"
#include<graphics.h>
#include<conio.h>
#include<dos.h>


int main()
{
	initwindow(600,600);
	
	int x1,x2,y1,y2;
	
	x1 =0;
	y1=0;
	x2=100;
	y2=150;
	
	float m = (float)(y2-y1)/(x2-x1);
	float y = y1;
	int x = x1;
	
	while(x<=x2)
	{
		y = y + m;
		putpixel(x,Round(y),4);
		x++;
	}
	
	getch();
	
	closegraph();
	
	return 0;
	bool isPlay = PlaySound("b.wav", NULL, SND_FILENAME);
 
	if (isPlay)
	{
		printf("This sound can be played");
	}
}
