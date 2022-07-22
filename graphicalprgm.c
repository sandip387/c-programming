#include<stdio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT, gm, errorcode;
    intgraph(&gd, &gm, "C:\\TC\\BGI");
    errorcode=graphresult();
    if(errorcode!=grOk)
{
    printf("\n Graphics Initializtion Failed!!!");
    exit();
}
setcolor(YELLOW);
line(0,0,630,470);
getch();
closegraph();
}