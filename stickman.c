#include<stdio.h>
#include<graphics.h>
#include<math.h>

int sign(int x) 
{
    return (x > 0) - (x < 0);
}

void drawcircle(float xc, float yc, float r)
{
	float d, x, y;

	d=1.25-r;
	x=0; y=r;

	do
	{
		x++;

		if(d<0)
		 d+=2*x+1;
		
		else
		{
			y--;
			d+=2*x-2*y+1;
		}

		putpixel(xc+x,yc+y,5);
		putpixel(xc-y,yc-x,5);
		putpixel(xc+y,yc-x,5);
		putpixel(xc-y,yc+x,5);
		putpixel(xc+y,yc+x,5);
		putpixel(xc-x,yc-y,5);
		putpixel(xc+x,yc-y,5);
		putpixel(xc-x,yc+y,5);

	}while(x<y);
}

void drawliner(float x1, float y1, float x2, float y2)
{
	float dx, dy, x, y, end, p;

	dx = abs(x2-x1);
	dy = abs(y2- y1);

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

		putpixel(x, y ,2);
	}
}


void drawlinel(float x1, float y1, float x2, float y2)
{
	float dx, dy, x, y, end, p;

	dx = abs(x2-x1);
	dy = abs(y2- y1);

	p = 2*dx-dy;

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
			y--;
			p+=2*(dx-dy);
		}

		putpixel(x, y ,2);
	}
}

int main()
{
	int gd=DETECT, gm, i;
	float xc, yc, r, x1, y1, x2, y2;

	initgraph(&gd, &gm, NULL);

	drawcircle(250, 100, 40);
	
	for(i=140;i<290;i++)
	 putpixel(250,i,2);

	drawliner(250, 170, 280, 220);
	drawlinel(250, 170, 200, 220);
	drawliner(250, 290, 280, 380);
	drawlinel(250, 290, 220, 380);

	delay(5000);
	closegraph();
}
