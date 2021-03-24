#include <stdio.h>
#include "base64.h"

int main(int argc,char** argv){

	if(argc<2){
		fprintf(stderr,"Usage: base64 plainText [-d (--decode)]");
		return -1;
	}else{
		if(argc>=3){
			if(strcmp(argv[2],"-d")==0 || strcmp(argv[2],"--decode")==0) //もしデコードをする指示なら
				base64.decode(argv[1]);
			else
				base64.encode(argv[1]);
		}
	}
	return 0;
}
