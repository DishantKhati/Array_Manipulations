#include<stdio.h>
int main()
{printf("ASCII VALUE\t\tCHARACTER\n");
  for(int i=0;i!=256;++i)
  {printf("  %d\t\t  %c\n",i,(char)i);
  }
  return 0;
}
