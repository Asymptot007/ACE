#include <stdio.h>
#include <graphics.h>
#include <math.h>



main()
{
	int gd = DETECT, gm;
	int pentagon[12]={340,150, 320,110, 360,70, 400,110, 380,150, 340,150};
        drawpoly(4, points);
 
        getch();
	closegraph();
}
