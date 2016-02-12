#include <graphics.h>
#include <stdio.h>

 
void main()
{
 
    int gd = DETECT, gm = DETECT;
    float x1, y1, x2, y2;
      float dx , dy ,xincr , yincr , steps , x,y;

 
    printf("Enter the sarting point x1 & y1\n");
    scanf("%f%f", &x1, &y1);
 
    printf("Enter the end point x2 & y2\n");
    scanf("%f%f", &x2, &y2);
 
    initgraph(&gd, &gm, NULL);
   
 
  
	dx = x2 - x1;
    dy = y2 - y1;
 
    if (abs(dx) > abs(dy))
	steps = abs(dx);
    else
	steps = abs(dy);
 
    xincr = dx / (float) steps;
    yincr = dy / (float) steps;
 
    x = x1;
    y = y1;
    putpixel(x1,y1,1); 
 
    int m;
	for (m = 0; m < steps; m++) {
	x += xincr;
	y += yincr;
	putpixel(x, y, 1);
    }
    delay(3000);
    closegraph();

}