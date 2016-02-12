#include<stdio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT, gm, steps, i;
	float x1, y1, x2, y2, absx, absy, x, y, xincrement, yincrement;


	printf("Enter the end points :\n");
	printf("Start point : ");
	scanf("%f%f",&x1, &y1);
	printf("\nEnd point : ");
	scanf("%f%f",&x2, &y2);

	absx = abs(x1-x2);
	absy = abs(y1-y2);

	steps = absx>absy?absx:absy;

	xincrement = absx/(float)steps;
	yincrement = absy/(float)steps;

	x = x1;
	y = y1;

	initgraph(&gd, &gm, "C:\\TC\\BGI");

	for(i=0;i<steps;i++)
	{
		x += xincrement;
		y += yincrement;

		putpixel(x,y,1);
	}

	delay(3000);
	closegraph();
}
