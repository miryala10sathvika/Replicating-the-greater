#include "main.h"
void convertToUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}
void convertToLowerCase(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}
int main(int argc, char** argv) {
	if (fork() == 0){
	printf("=== Child Process ===\n");
	convertToUpperCase(argv[1]);
	printf("\t%s\n",argv[1]);
	}
    else{
    	printf("=== Parent Process ===\n");
    	convertToLowerCase(argv[1]);
    	printf("\t%s\n",argv[1]);
    	}
    return 0;
}
