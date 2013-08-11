#include "prime.h"
#include <stdio.h>
#include <assert.h>
int main(void){
	int input,temp,output;
	scanf("%d",&input);
	assert(input >= 2);
	temp=input;
	printf("%d=",input);
	while(!isprime(temp)){
		prime(&temp,&output);
		printf("%d*",output);
	}
	printf("%d\n",temp);
	return 0;
}
