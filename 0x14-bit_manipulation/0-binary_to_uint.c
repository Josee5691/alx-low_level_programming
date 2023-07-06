#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */

unsigned int binary_to_uint(const char *b){
	if (b == NULL){
		return 0;
	}

	unsigned int res = 0;
	int i = 0;

	while(b[i] != '\0'){
		if(b[i] != '0' && b[i] != '1')
			return 0;
		res = (res << 1) + (b[i] - '0');
		i++;
	}
	return res;
}
