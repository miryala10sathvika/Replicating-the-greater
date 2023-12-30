#include "main.h"
#include "dir_op.c"
#include "rev.c"
#include "file_op.c"
int main(int argc, char *argv[])
{
	int fd, sz,sz2,length;
	long int cp,max;
	char s[] = "../Part_1/copies/";
	char k[100];//100
	strcpy(k,argv[1]);
	createDirectory();
	fd=openFiles1(argv[1]);
	off_t fileSize = lseek(fd, 0, SEEK_END);
	if (max>8192){
		max=8192;
	}
	else{
		max=fileSize;
	}
	length=strlen(argv[1]);
	k[length - 4] = '\0';
	strcat(s,k);
	strcat(s,"_reverse.txt");
	int fd2 = open(s, O_WRONLY | O_CREAT | O_TRUNC, 0664);//opening the file to be updated,creating it if not existing
	if (fd2 < 0) {
		perror("r2");
		exit(1);
	}
	char* c = (char*)calloc(max*4, sizeof(char));//copying from file to another
	for (off_t offset = fileSize - max; offset >= 0; offset -= max) 
        {
        	 lseek(fd, offset, SEEK_SET);
        	 sz=read(fd, c, max);
		 c[sz] = '\0';
		 revereseArray(c, 0, sz-1);
		 sz2 = write(fd2, c, sz);
		 
        }
              printf("Reversing the file Completed Successfully\n");
	return 0;
}

