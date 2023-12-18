#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int queue_array[MAX];
int rear = -1;
int front = -1;
void enqueue(int item){
    if (rear == MAX-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    else
    {
        rear = rear + 1;
        queue_array[rear] = item;
    }
    void dequeue();
    {
        if (front == -1 || front > rear)
        {
            printf("Queue Underflow\n");
            return;
        }
        else
        {
            printf("Element deleted from queue is : %d\n", queue_array[front]);
            front = front + 1;
        }
    }
    void display();
    {
        int i;
        if (front == -1)
        {
            printf("Queue is empty\n");
        }
        else
        {
            printf("Queue is :\n");
            for (i = front; i <= rear; i++)
            {
                printf("%d ", queue_array[i]);
            }
            printf("\n");
        }
    }


    
}