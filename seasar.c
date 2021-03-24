#include "seasar.h"

void Encrypt(char* src,char* dst,int n){
	for(int i=0;i<strlen(src);i++){

		//もしi番目の文字がアルファベットだったら
		if((src[i]>='A' && src[i]<='Z') ||
			 (src[i]>='a' && src[i]<='z')
		)
			src[i]+=n;
		if(src[i]>'Z' && src[i]>'z')
			src[i]-=26;
			//src[i]=('a'-1)+(src[i]+n-(int)'z');
	}
	strcpy(dst,src);
}

void Decrypt(char* src,char* dst,int n){
	
	for(int i=0;i<strlen(src);i++){

		//もしi番目の文字がアルファベットだったら
		if((src[i]>='A' && src[i]<='Z') ||
			 (src[i]>='a' && src[i]<='z')
		)
			src[i]-=n;
		if(src[i]>'Z' && src[i]>'z')
			src[i]+=26;
	}
	strcpy(dst,src);
}
