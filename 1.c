#include <stdio.h>
#include <unistd.h>
int main(void){
  int m=0;//minutes
  int h=0;//hours
  for(int s=0;s!=-1;s++) {//s is seconds
  sleep(1);
  if(s==60){
      m++;
      s=0;
    }
    if(m==60){
      h++;
      m=0;
    }
printf("%2d:%2d:%2d\n",h,m,s);
fflush(stdout) ;
}
}
