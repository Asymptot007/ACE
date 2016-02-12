#include<stdio.h>
#include<graphics.h>

void drawcircle(float X, float Y, float P, float Q)
{
	 putpixel (X + P, Y + Q, 1);
	 putpixel (X - P, Y + Q, 2);
	 putpixel (X + P, Y - Q, 3);
	 putpixel (X - P, Y - Q, 4);
	 putpixel (X + Q, Y - P, 5);
	 putpixel (X - Q, Y - P, 6);
	 putpixel (X + Q, Y + P, 7);
	 putpixel (X - Q, Y + P, 8);

	return;
}

int main()
{
	int gd=DETECT, gm ,i;
	float p, q, r, d, x, y;

	printf("Enter the co-ordinates of the center : ");
	scanf("%f%f",&x, &y);

	printf("\nEnter the radius : ");
	scanf("%f",&r);

	p=0; q=r;
	d=3-2*r;

	initgraph(&gd, &gm, NULL);	
	
	while(p<q)
	{
		p++;

		if(d<0)
		 d+=4*p+6;

		else
		{
			q--;
			d+=4*(p-q)+10;
		}

		drawcircle(x, y, p, q);
		delay(100);
	}

	closegraph();
}
