#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	float x1,y1,r1,x2,y2,r2,r;
	float dist;
	printf ("circle #1: ");
	scanf ("%f%f%f ",&x1,&y1,&r1);
	
	printf ("\n\ncircle #2: ");
	scanf ("%f%f%f", &x2,&y2,&r2);
	dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	r=r1+r2;
	printf ("\n\n 1.circle (%.2f %.2f %.2f)",x1,y1,r1);
	printf ("\n Perimitr = %.2f",2*3.14*r1);
	printf ("\n area = %.2f \n",r1*3.14*r1);
	if (dist <= r)
	printf ("intersects : \n circle #2");
 	else 
	printf ("no intersect");
	return 0;	
}
