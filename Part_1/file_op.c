#include "main.h"
int openFiles1(char *p){
	int fd = open(p, O_RDONLY);//opening the file to be read
	if (fd < 0) {
		perror("r1");
		exit(1);
	}
	return fd;
	}
