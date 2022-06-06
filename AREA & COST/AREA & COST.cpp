#include<stdio.h>
int main()
{float l,b,a,h;
 printf("ENTER THE LENGTH AND BREADTH(in m):\n");
 scanf("%f%f",&l,&b);
 printf("ENTER THE HEIGHT(in cm): ");
 scanf("%f",&h);
 h=h/100;
 a=(2*(l+b)*h)+(l*b);
 printf("AREA: %.2f\nCOST: %.2f",a,a*20);
 return 0;
}
