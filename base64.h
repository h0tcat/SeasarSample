#ifndef __BASE64_H__
#define __BASE64_H__

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void encode(char* dst,char* src);
void decode(char* dst,char* src);

typedef struct {
	//Base64の変換表
	char convertMap[64][64]={{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
		 ,16,17,18,19,20,21,22,23,24,25,26,27
		 ,28,29,30,31,32,33,34,35,36,37,38,39
		 ,40,41,42,43,44,45,46,47,48,49,50,51
		 ,52,53,54,55,56,57,58,59,60,61,62,63
		 },
		 {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'
		 ,'Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f'
		 ,'g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'
		 ,'w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'
		 }
	};
	
}base64;

void encode(char* dst,char* src){
	size_t srcLen=strlen(src);
	
	char* binSrc[srcLen][1024];
	for(int i=0;i<srcLen;i++){
		for(int i=128;i>0;i=i>>1){
			sprintf(binSrc[i],"%d",(src[i] & i)!=0);
		}
	}
}
#endif
