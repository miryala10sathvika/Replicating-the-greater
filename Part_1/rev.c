#include "main.h"
//function for reversing the given buffer array
void revereseArray(char arr[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = arr[start];   
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
} 
