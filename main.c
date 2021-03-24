#include "seasar.h"
#include <stdio.h>
#include <stdlib.h>

int  main(int argc,char** argv){

	if(argc<=2){
		fprintf(stderr,"Usage: seaser plaintext N \n");
		return -1;
	}else{

		int N=atoi(argv[2]);

		char* result=(char*)malloc(strlen(argv[1])*sizeof(char*));
		Encrypt(argv[1],result,N);
		
		printf("Encrypted : %s\n",result);

		char* decryptedStr=(char*)malloc(strlen(argv[1])*sizeof(char*));
		Decrypt(result,decryptedStr,N);
		printf("Decrypted : %s\n",decryptedStr);
		free(result);
		free(decryptedStr);
	}
	return 0;
}
