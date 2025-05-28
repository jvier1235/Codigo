#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    int len=sizeof(array)/sizeof(int);
    printf("los bytes del arreglo son: %d\n",sizeof(array));
    printf("cadena entero riene: %d bytes\n",sizeof(int));
    printf("El arreglo tiene %d elementso\n",len);
    return 0;
}