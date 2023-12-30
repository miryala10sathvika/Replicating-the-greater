#include "main.h"
//creating the directory copies if not present
void createDirectory(){
	int check,ret;
	check = mkdir("copies",0755);
    	if (!check){
        	printf("Directory created\n");
        }
    	else {
        	printf("Unable to create directory due to its presence but creating again by deleting existing one\n");
        	ret=rmdir("copies");
        	check = mkdir("copies",0755);
        	printf("Directory created\n");
    	}
}
