#include<stdio.h>
int main()
{  int i;
  char str[20];
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {if(str[i]<=90 && str[i]>=65)
      str[i]=str[i]+32;
  }
 puts(str);


}
