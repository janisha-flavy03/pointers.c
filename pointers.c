#include <stdio.h>
int main() {
    // Write C code here
int a[3][3]={6,3,5,7,8,9,2,6,7};
int *p;
 p= &a[0][0];
printf("%d\n",&a[0][0]);
printf("%d\n",a[0]);
printf("%d\n",a[0][0]);
printf("%d\n",a);
printf("%d\n",*a+1);
printf("%d\n",(*a+1)+2);
printf("%d\n",*(*a+1)+2);
printf("%d\n",&a[0][2]);
printf("%d\n",a[0][2]);
return 0;
}
