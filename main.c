#include "prime.h"
#include <stdio.h>
#include <assert.h>
int main(void){
	bigint input,temp,output;
	scanf("%llu",&input);
	assert(input >= 2);
	temp=input;
	printf("%llu=",input);
	while(!isprime(temp)){
		prime(&temp,&output);
		printf("%llu*",output);
	}
	printf("%llu\n",temp);
	return 0;
}
