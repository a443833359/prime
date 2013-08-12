#include "prime.h"
#include <stdio.h>
#include <assert.h>
int main(void){
	bigint temp,output;
	scanf("%llu",&temp);
	assert(temp >= 2);
	printf("%llu=",temp);
	while(!isprime(temp)){
		prime(&temp,&output);
		printf("%llu*",output);
	}
	printf("%llu\n",temp);
	return 0;
}
