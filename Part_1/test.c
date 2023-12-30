#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
 FILE *output;
 output=fopen("hai.txt","wb");
 long long int i;
 for(i=0;i<pow(2,27);i++)
 {
    fprintf(output,"hey hello %lld",i);
 }
}
