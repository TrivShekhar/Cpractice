#include<stdio.h>
#define max 100
int arr[max];
int top=-1;
void push(){
    int a;
    if(top==max-1){
        printf("StackOverFlow\n");
    }
    else{
        printf("Enter the element to be pushed: ");
        scanf("%d",&a);
        top++;
        arr[top]=a;
    }
}
int pop(){
    if(top==-1){
        printf("StackUnderFlow\n");
    }
    else{
        return arr[top--];
    }
}
void peek(){
    int temp;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        temp=top;
        while(temp>=0){
            printf("\n|%d|",arr[temp]);
            temp--;
        }
    printf("\n");
    }
    
}
void main(){
    char ch;
    int a=1;
    while(a){
        printf("\nEnter the action you want to perform on stack\n");
        printf("P to push\n");
        printf("O to pop\n");
        printf("E to peek\n");
        printf("Q to quit\n");
        scanf(" %c",&ch);
        switch(ch){
            case 'P':
                push(5);
                break;
            case 'O':
                printf("Element %d removed",pop());
                break;
            case 'E':
                peek();
                break;
            case 'Q':
                a=0;
                break;
            default:
                printf("Invalid input");
        }
    }

}