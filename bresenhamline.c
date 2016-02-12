#include<stdio.h>
#include<graphics.h>

int main()
{
	int x1, y1, x2, y2, dx, dy, p, pk, gd=DETECT, gm, x, y, end;

	printf("Enter the end points :\n");
	printf("Start point : ");
	scanf("%d%d",&x1, &y1);
	printf("\nEnd point : ");
	scanf("%d%d",&x2, &y2);

	dx = abs(x2-x1);
	dy = abs(y2- y1);

	initgraph(&gd, &gm, NULL);

	p = 2*dy-dx;

	if(x1>x2)
	{
		x = x2;
		y = y2;
		end = x1;
	}
	else
	{
		x = x1;
		y = y1;
		end = x2;
	}
	putpixel(x, y ,1);

	while(x<end)
	{
		x++;

		if(p<0)
		 p+=2*dy;

		else
		{
			y++;
			p+=2*(dy-dx);
		}

		putpixel(x, y ,1);
	}

	delay(5000);
	closegraph();
}
