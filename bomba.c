#include <stdio.h>
int main(){
int i;
char c;
printf("Pulse una tecla para iniciar la bomba \n");
scanf ("%c",c);  
for(i=10;i>=0;i--){
printf("%d \n",i);
sleep(1);
}
printf("BOOOMMM!!!");
return 0;
}
