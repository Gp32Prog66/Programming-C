#include <stdio.h>
void fun1(int u)
{ u = 0;
printf("\nWithin fun1: u = %d", u);
return;
}
void fun2(int *pu)
{
*pu = 0;
printf("\nWithin fun2: u = %d", *pu);
return;
}
main()
{

int u = 3;
printf("\nBefore calling fun1: u = %d", u);
fun1(u); /* the value of u is passed to the function*/
printf("\nAfter calling fun1: u = %d", u); u = 4;
printf("\nBefore calling fun2: u = %d", u);
fun2(&u);
/* the address of the variable is passed */
printf("\nAfter calling fun2: u = %d",u);
}
