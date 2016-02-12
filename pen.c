#include <stdio.h>
#include <graphics.h>
#include <math.h>



main()
{
	int gd = DETECT, gm,i,j;
        initgraph(&gd, &gm, "C:\\TC\\BGI");
         float an = 10*3.141592/180;
    setcolor(1);
            for(i=0;i<40;i++)
              line(70,70+i,110,70+i);
    setcolor(2);
            for(i=0,j=0;i<10 && j<10;i++,j++)
              line(60+j,60+i,60+j,100+i);
    setcolor(3);
           for(i=0,j=0;i<10 && j<10 ;i++,j++)
           line(60+i,60+i,100+i,60+i);
   
       
     setcolor(4);
            for(i=0;i<40;i++)
             line(160,60+i,200,60+i);
    setcolor(5);
            for(i=0,j=0;i<10 && j<10;i++,j++)
              line(160+j,100+i,200+j,100+i);
    setcolor(6);
           for(i=0,j=0;i<10 && j<10 ;i++,j++)
           line(200+i,60+i,200+i,100+i);
   
        
        
        getch();
	closegraph();
}
