#include<stdio.h>
#define maxsize 5
struct CircularQueue
{
    int front,rear;
    int size;
    int arr[maxsize];
};
struct CircularQueue queue;

void enqueue(int);
int dequeue();
void display();
void enqueue(int item){
    if((queue.rear+1)%maxsize==queue.front){
        printf("Queue is full\n");
        return;
    }
    if(queue.front==-1){
        queue.front=queue.rear=0;
        queue.arr[queue.rear]=item;
        queue.size++;
    }
    else{
    queue.rear = (queue.rear + 1) % maxsize;
    queue.arr[queue.rear]=item;
    queue.size++;
    }
 
    printf("%d is enqueued\n",item);
}
int dequeue(){
    int item=queue.arr[queue.front];
    if(queue.front==-1){
        printf("Queue is empty\n");
        return;
    }
    if(queue.front==queue.rear){
        queue.front=-1;
        queue.rear=-1;
        queue.size=0;
    }
    else{
        queue.arr[queue.front]=NULL;
        queue.front=(queue.front+1)%maxsize;
        queue.size--;
    }
    return item;
}
void display(){
    int i;
    if(queue.front==-1){
        printf("Queue is empty\n");
        return;
    }
    printf("\nItems: ");
    for(i=0;i<queue.size;i++){
        printf("%d ",queue.arr[i]);
    }
    printf("\n");
}

void main()
{
    int choice,item,n=1;
    queue.front=-1;
    queue.rear=-1;
    queue.size=0;
    while(n)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nChoice: ");
        scanf("%d",&choice);
        switch(choice)
        {   
            case 1:
                printf("Enter the item to be inserted\n");
                scanf("%d",&item);
                enqueue(item);
                printf("\n%d %d",queue.front,queue.rear);
                break;
            case 2:
                printf("Deleted item is %d\n",dequeue());
                break;
            case 3:
                display();
                break;
            case 4:
                n=0;
                break;
            default:
                printf("Invalid choice\n");
        }
    }
}

