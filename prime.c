#include "prime.h"
void prime(bigint* in,bigint* out){
	for(bigint i=2;i<(*in);i++)
		if(isprime(i))
			if(!((*in) % i)){
				*in=(*in) / i;
				*out=i;
				return;
			}
}
