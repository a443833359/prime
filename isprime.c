#include "prime.h"
bool isprime(bigint temp){
	for(bigint i=2;i<temp;i++)
		if(!(temp % i))
			return false;
	return true;
}
