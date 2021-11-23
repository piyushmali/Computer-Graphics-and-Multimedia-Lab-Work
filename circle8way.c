#include <graphics.h>
int x1, yy, x2, y2, x3, y3, mx, my;
int main()
{
    int gd = DETECT, gm;
    int r, xc, x, yc, y;
    printf("Enter radius");
    scanf("%d", &r);
    printf("Enter the center coordinates");
    scanf("%d%d", &xc, &yc);
    initgraph(&gd, &gm, "NULL");
    for (x = -r; x <= r; x++)
    {
        y = sqrt(r * r - x * x);
        putpixel(x + xc, y + yc, RED);
        putpixel(y + xc, x + yc, YELLOW);
        putpixel(y + xc, -x + yc, GREEN);
        putpixel(x + xc, -y + yc, BLUE);
        putpixel(-x + xc, -y + yc, CYAN);
        putpixel(-y + xc, -x + yc, MAGENTA);
        putpixel(-y + xc, x + yc, BROWN);
        putpixel(-x + xc, y + yc, WHITE);
    }
    delay(50000);
    closegraph();
}