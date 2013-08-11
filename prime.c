#include "prime.h"
void prime(int* in,int* out){
	for(int i=2;i<(*in);i++)
		if(isprime(i))
			if(!((*in) % i)){
				*in=(*in) / i;
				*out=i;
				return;
			}
}
