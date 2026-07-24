#include <stdio.h>
#include <unistd.h>
#include <time.h>
int main(void){
int z=0;
int x=0;
for(int y=0;y!=-1;y++) {
sleep(1);
if(y==60){
z++;
y=0;
}
if(z==60){
x++;
z=0;
}

printf("%d:%d:%d\n",x,z,y);
fflush(stdout);



}
}
