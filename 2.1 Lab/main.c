#include <stdio.h>
// max returns the maximum of two values
float max(float a, float b) { if (a>b)
return(a);
else return(b);
}
// start of main
main()
{
float x1=5., y1 = 10.; float
x2 = 15., y2 = 20.;
float z1, z2;
z1 = max(x1,y1);
z2 = max(x2,y2);
printf("\nThe greater of %f and %f is: %f \n",x1,y1,z1);
printf("\nThe greater of %f and %f is: %f \n",x2,y2,z2);
}
