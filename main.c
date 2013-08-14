#include "prime.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
	bigint temp=0,output;

	assert(argc == 2 || argc == 1);
	if(argc == 2)
		temp=strtoull(argv[1],NULL,10);
	else
		while(!scanf("%llu",&temp)){
			while(getchar() != '\n');
			printf("Bad Input\n\n");
		}
	assert(temp >= 2);
	printf("%llu=",temp);
	while(!isprime(temp)){
		prime(&temp,&output);
		printf("%llu*",output);
	}
	printf("%llu\n",temp);
	return 0;
}
