#include "prime.h"
int isprime(bigint temp){
	for(bigint i=2;i<temp;i++)
		if(!(temp % i))
			return 0;
	return 1;
}
