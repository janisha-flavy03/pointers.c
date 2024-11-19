#include <stdio.h>

int main() {
    int a[5]={4,5,6,8,9};
    int *p;
    p=&a[0];
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",p+1);
    printf("%d\n",*(p+1));
    p=a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",*p+1);
    printf("%d\n",a+1);
    printf("%d\n",*(a+1));
        printf("%d\n",&a[0]);
        return 0;
}