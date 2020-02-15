#include <iostream>
#include<graphics.h>

using namespace std;
void floodFill(int x,int y,int oldcolor,int newcolor)
{
	if(getpixel(x,y) == oldcolor)
	{
		putpixel(x,y,newcolor);
		floodFill(x+1,y,oldcolor,newcolor);
		floodFill(x,y+1,oldcolor,newcolor);
		floodFill(x-1,y,oldcolor,newcolor);
		floodFill(x,y-1,oldcolor,newcolor);
	}
}

int main()
{
    initwindow(1000,1000);
    arc(200,200,0,180,40);
    arc(280,200,0,180,40);
    line(160,200,240,300);
    line(320,200,240,300);
    floodFill(240,240,BLACK,RED);
    getch();
}

