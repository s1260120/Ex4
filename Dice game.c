#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int i,s,t=0;
	printf("Rolling the dice\n");
	for(i=0;i<2;i++){
	srand(time(NULL));
	s = rand() %6 + 1;
	t = t + s;
	printf("Die %d: %d\n",i,s);
}
	printf("Total value: %d\n",t);
return 0;
}