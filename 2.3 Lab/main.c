#include <stdio.h>
main()
{ int u = 5; // declaration of integer variable u */
 int* pu; // decl. of pointer to an integer variable
pu = &u; // assigning the address of variable u to the
//pointer variable
printf("\npu = 0x%x, &u = 0x%x\n", pu,
&u);
printf("\n(*pu) = %d, u = %d\n", *pu,u);
}
