
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGi");

    while (!kbhit())
    {
        setcolor(WHITE);
        circle(40, 50, 25);
        setfillstyle(1, 15);
        floodfill(40, 50, 15);

        line(0, 300, 120, 300); //** ground first line.
        delay(10);
        line(530, 300, 650, 300); //** ground second line.
        delay(10);
        line(120, 350, 260, 380); //** at the down of the gate.
        delay(10);
        line(247, 379, 247, 230);
        delay(10);
        line(135, 240, 170, 237);
        delay(10);
        line(135, 240, 135, 300);
        delay(10);
        line(135, 300, 170, 300); //** first window.
        delay(10);
        line(170, 300, 170, 236); //** window second line.
        delay(10);
        line(152, 300, 152, 237); //** third line.
        delay(10);

        line(247, 230, 195, 233); //** line on the gate.
        delay(10);
        line(195, 233, 195, 368); //** tuch circle line
        delay(10);
        line(260, 380, 530, 330); //** down side at big window.
        delay(10);
        line(530, 330, 530, 275); //** last wall at back side.
        delay(10);

        line(260, 220, 285, 250); //** down side ot the roof.
        delay(10);
        line(285, 250, 540, 275);
        delay(10);
        line(260, 380, 260, 220); //** right side wall with gate.
        delay(10);
        line(495, 200, 540, 275);
        delay(10);
        line(194, 143, 495, 200); //** upper side of roof line.
        delay(10);
        line(200, 150, 194, 143); //** edge of top of the roof.
        delay(10);
        line(194, 143, 285, 250);
        delay(10);
        line(195, 143, 93, 245); //** roof at front from top to bottom.
        delay(10);
        line(93, 245, 120, 245);
        delay(10);

        line(120, 350, 120, 230); //** first wall at leaft side.
        delay(10);
        line(120, 230, 200, 150); //** second window.
        delay(10);
        line(400, 280, 450, 275);
        delay(10);
        line(450, 275, 450, 315);
        delay(10);
        line(400, 325, 450, 315);
        delay(10);
        line(400, 324, 400, 279);
        delay(10);
        line(425, 320, 425, 278);
        delay(10);
        line(450, 296, 400, 302);
        delay(10);
        circle(205, 300, 5); //** circle on the door.
        delay(10);

        setfillstyle(1, 0);
        floodfill(0, 295, 15);
        setfillstyle(1, 2);
        floodfill(0, 305, 15);
        setfillstyle(2, 6);
        floodfill(125, 350, 15);
        setfillstyle(2, 6);
        floodfill(525, 330, 15);
        setfillstyle(9, RED);
        floodfill(194, 148, 15);
        setfillstyle(9, RED);
        floodfill(490, 200, 15);

        circle(90, 80, 15); // for making clouds clouds
        circle(120, 80, 25);
        circle(150, 80, 20);
        circle(170, 80, 10);

        circle(10, 10, 15);
        circle(25, 10, 7);

        circle(370, 30, 10);
        circle(400, 30, 20);
        circle(420, 30, 25);
        circle(450, 30, 15);

        setcolor(15); // for making the tree

        ellipse(95, 100, 190, -90, 40, 40);
        ellipse(15, 100, 280, 0, 40, 40);
        line(25, 140, 45, 148);

        ellipse(105, 140, 190, -90, 40, 40);
        ellipse(-5, 149, 290, 0, 50, 40);
        line(15, 185, 43, 194);

        ellipse(115, 175, 190, -90, 40, 40);
        ellipse(-7, 185, 290, 0, 50, 40);
        line(76, 195, 106, 179);
        line(65, 148, 95, 140);
        ellipse(100, 185, 230, -80, 100, 30);
        ellipse(-5, 192, -80, -10, 90, 30);
        line(50, 215, 50, 320);
        line(70, 212, 70, 320);
        line(30, 320, 80, 320);

        setfillstyle(1, 2);
        floodfill(55, 150, 15);
        floodfill(80, 210, 15);
        floodfill(40, 215, 15);

        setfillstyle(9, 6);
        floodfill(55, 310, 15);
        floodfill(55, 250, 15);

        putpixel(rand() % 630, rand() % 150, WHITE); //** for stars.
        delay(10);
    }
    getch();
}