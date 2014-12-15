#include "bwindow.h"
#include "boids.h"


int main()
{
    /*bwindow win(640,480);
    printf("%d\n",win.init());
    win.map();
    for(;;)
    {
	int ev = win.parse_event();
	switch(ev)
	{
	    case BKPRESS :
		printf("keypressed\n"); 
		printf("key : %s\n",win.get_lastkey());
		break;
	    case BBPRESS:
		printf("buttonpressed\n"); break;
	    case BEXPOSE:
		printf("expose\n"); break;
	    case BCONFIGURE:
		printf("configure\n"); break;
	}
	win.draw_point(100,100,0xFF00);
	win.draw_line(100,100,200,200,0xFF0000);
	win.draw_text(10,10,0x0,"Hello World",strlen("Hello World"));
	win.draw_square(200,200,220,220,0xFF00);
	win.draw_fsquare(400,400,440,440,0xFF00);
    }*/

	agent myAgent;
	printf("x = %d\n",myAgent.GetPos()[0]);
	printf("y = %d\n",myAgent.GetPos()[1]);

	int* p = new int[2];
	*p = 5;
	*(p+1) = 3;
	double* s = new double[2];
	*s = 1;
	*(s+1) = 1;

	agent agent2 = agent(p,s);
	printf("x = %d\n",agent2.GetPos()[0]);
	printf("y = %d\n",agent2.GetPos()[1]);

	boids myBoids = boids(myAgent);
	printf("%d\n",myBoids.GetNb());
	myBoids.addElement(agent2);
	printf("%d\n",myBoids.GetNb());

	//delete myBoids;

    return 0;
}
