#include <stdio.h>
#include <graphics.h>
#include <math.h>

void circled(float xc,float yc,float r)
{
    float incr=1.0/r,x,y;
    float i;
    for(i=0;i<360;i = i+ incr)
    {
          x = r*cos(i*(3.14159/180.0));
          y = r*sin(i*(3.14159/180.0));
          putpixel(xc+x,yc+y,1);
     }
}


void linedc(float x , float y , float xincr , float yincr , float steps , int color)
{
	int i;
	for (i = 0; i < steps; i++) {
	x += xincr;
	y += yincr;
	putpixel(x, y, color);
    }
      
}

void lined(float x1 , float y1 , float x2 , float y2,int color)
{
	float dx , dy ,xi , yi , steps , x,y;
	dx = x2 - x1;
    dy = y2 - y1;
 
    if (abs(dx) > abs(dy))
	steps = abs(dx);
    else
	steps = abs(dy);
 
    xi = dx / (float) steps;
    yi = dy / (float) steps;
 
    x = x1;
    y = y1;
    putpixel(x1,y1,color);   
        
       linedc(x,y,xi , yi , steps , color);
        
 }
 


int main()
{
	int gd = DETECT, gm,i;
	initgraph(&gd, &gm, NULL);

	for(i=0;i<400-26;i++)
		lined(26+i,26,26+i,86,12);
	for(i=0;i<400-26;i++)
		lined(26+i,86,26+i,146,15);
	for(i=0;i<400-26;i++)
		lined(26+i,146,26+i,206,2);
	circled(200,116,25);
	float teta = 2*3.141592*15/260;
	for(i=0;i<24;++i)
      	 lined(200,116,200+(25*cos(i*teta)),116+(25*sin(i*teta)),1);
      
	delay(5000);
	closegraph();
}
