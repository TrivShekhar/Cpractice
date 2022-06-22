 #include<stdio.h>
 #include<stdlib.h>
 void main(){
    int *a,i=0;
    a= (int*)calloc(10,sizeof(int));
    while(i<10){
        scanf("%d\n",a+i);
        i++;
        }
    i=0;
    while(i<10){
        printf("%d\n",*(a+i));
        i++;
        }

    free(a);
 }