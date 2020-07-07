#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main()
{
    int key, graphics = 0, detect;
    initgraph(&graphics, &detect, "c:turboc3bgi");
    for (int i = 0; i <= 600; i += 40)
    {
        bar(i, 200, i + 30, 400);
        setcolor(1);

        rectangle(i, 200, i + 30, 400);
    }
    setcolor(15);
    outtextxy(0, 0, "Press ENTER to exit");
    setcolor(1);
    outtextxy(15, 380, "a");
    outtextxy(55, 380, "s");
    outtextxy(95, 380, "d");
    outtextxy(135, 380, "f");
    outtextxy(175, 380, "g");
    outtextxy(215, 380, "h");
    outtextxy(255, 380, "j");
    outtextxy(295, 380, "k");
    outtextxy(335, 380, "l");
    outtextxy(375, 380, "z");
    outtextxy(415, 380, "x");
    outtextxy(455, 380, "c");
    outtextxy(495, 380, "v");
    outtextxy(535, 380, "b");
    outtextxy(575, 380, "n");
    outtextxy(615, 380, "m");
    while (key != 'r')
    {
        setfillstyle(1, 7);
        // nosound();
        key = getch();
        switch (key)
        {
        case 'a':
            Beep(100,50);
            floodfill(15, 210, 1);
            delay(30);
            setfillstyle(1, 15); 
            floodfill(15, 210, 1);
            break;
        case 's':
            Beep(200,50);
            floodfill(55, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(55, 210, 1);
            break;
        case 'd':
            Beep(300,50);
            floodfill(95, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(95, 210, 1);
            break;
        case 'f':
            Beep(400,50);
            floodfill(135, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(135, 210, 1);
            break;
        case 'g':
            Beep(500,50);
            floodfill(175, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(175, 210, 1);
            break;
        case 'h':
            Beep(600,50);
            floodfill(215, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(215, 210, 1);
            break;
        case 'j':
            Beep(700,50);
            floodfill(255, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(255, 210, 1);
            break;
        case 'k':
            Beep(800,50);
            floodfill(295, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(295, 210, 1);
            break;
        case 'l':
            Beep(900,50);
            floodfill(335, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(335, 210, 1);
            break;
        case 'z':
            Beep(100,500);
            floodfill(375, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(375, 210, 1);
            break;
        case 'x':
            Beep(110,500);
            floodfill(415, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(415, 210, 1);
            break;
        case 'c':
            Beep(120,500);
            floodfill(455, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(455, 210, 1);
            break;
        case 'v':
            Beep(130,500);
            floodfill(495, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(495, 210, 1);
            break;
        case 'b':
            Beep(140,500);
            floodfill(535, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(535, 210, 1);
            break;
        case 'n':
            Beep(150,500);
            floodfill(575, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(575, 210, 1);
            break;
        case 'm':
            Beep(160,500);
            floodfill(615, 210, 1);
            delay(30);
            setfillstyle(1, 15);
            floodfill(615, 210, 1);
            break;
        }
    }
    //nosound();
}
