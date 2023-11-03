#include <stdio.h>

int a[50], limit, front=-1, rear=-1, choice;

void Enqueue();
void Dequeue();
void Display();

int main(){
	printf("Enter the limit : ");
	scanf("%d", &limit);

	printf("\n1) Enqueue\n2) Dequeue\n3) Display\n4) Exit\n");
	do {
		printf("\nEnter the choice : ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				Enqueue();
				break;
			case 2:
				Dequeue();
				break;
			case 3:
				Display();
				break;
			case 4:
				break;
			default:
				printf("Please select valid option\n");
		}
	} while(choice != 4);
}

void Enqueue() {
    if((front == rear + 1) || (front == 0 && rear == limit-1))
        printf(" Circular Queue OVERFLOW\n");
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % limit;
        printf("Enter the element : ");
        scanf("%d", &a[rear]);
    }
}

void Dequeue() {
    int m;
    if(front == -1)
        printf("Circular queue UNDERFLOW \n");
    else {
        int m= a[front];
        if(front == rear)
            front = rear = -1;
        else {
            front = (front + 1) % limit;
        }
        printf("%d is DELETED \n", m);
    }
}

void Display() {
    int i;
    if(front == -1)
        printf("Circular queue UNDERFLOW\n");
    else {
        printf("\n Front = %d ", front);
        printf("\n Elements = ");
        for (i = front; i != rear; i = (i + 1) % limit) {
        printf("%d ",a[i]);
        }
        printf("%d ", a[i]);
        printf("\n Rear  =  %d \n", rear);
    }
}
