#include <stdio.h>
#include <stdlib.h>

void infront(int);
void inend(int);
void inany(int, int);

void delfront();
void delend();
void delany(int);

void display();

struct node {
    int data;
    struct node *ptr;
};
struct node *start;


int main() {
    int option, value, position;
    printf("The linked list operations are : \n");
    printf("1) Insertion at front\n2) Insertion at end\n3) Insertion at any point\n4) Deletion at front\n5) Deletion at end\n6) Deletion at any point\n7) Display\n8) Exit\n");
    do {
        printf("\nSelect your option : ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Enter the data : ");
                scanf("%d", &value);
                infront(value);
                display();
                break;
            case 2:
                printf("Enter the data : ");
                scanf("%d", &value);
                inend(value);
                display();
                break;
            case 3:
                printf("Enter the data : ");
                scanf("%d", &value);
                printf("Enter the position : ");
                scanf("%d", &position);
                inany(value, position);
                display();
                break;
            case 4:
                delfront();
                display();
                break;
            case 5:
                delend();
                display();
                break;
            case 6:
            	printf("Enter the position : ");
            	scanf("%d", &position);
            	delany(position);
            	display();
            	break;
            case 7:
                display();
                break;
            case 8:
                printf("Exited\n");
                break;
            default:
                printf("Invalid option");
        }

    } while(option!=8);
}

void infront(int value) { 
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node *));
     
    if(head == NULL) {
        temp->ptr = NULL;
        temp->data = value;
        head = temp;
    } else {
        temp->ptr = head;
        temp->data = value;
        head = temp;
    }
}

void inend(int value) {
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node *));
    
    if(head == NULL) {
        temp->ptr = NULL;
        temp->data = value;
        head = temp;
    } else {
        p = head;
        while(p->ptr != NULL) {
            p = p->ptr;
        }
        p->ptr = temp;
        temp->ptr = NULL;
        temp->data = value;
    }
}

void inany(int value, int position){
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node *));

    if(head == NULL) {
        temp->ptr = NULL;
        temp->data = value;
        head = temp;
    } else if(position <= 1) {
        temp->ptr = head;
        temp->data = value;
        head = temp;
    } else {
        p = head;
        for(int i=1; i<position-1; i++) {
            p = p->ptr;
        }
        temp->ptr = p->ptr;
        p->ptr = temp;
        temp->data = value;
    }
}

void delfront() {
    struct node *temp;

    if(head == NULL) {
        printf("Cannot delete\n");
    } else if(head->ptr == NULL) {
        temp = head;
        head = NULL;
        printf("Deleting data = %d\n", temp->data);
        free(temp);
    } else {
        temp = head;
        head = head->ptr;
        printf("Deleting data = %d\n", temp->data);
        free(temp);
    }
}

void delend() {
    struct node *temp;

    if(head == NULL) {
        printf("Cannot delete\n");
    } else if(head->ptr == NULL) {
        temp = head;  
        head = NULL;      
        printf("Deleting data = %d\n", temp->data);
        free(temp);
    } else {
        struct node *p;
        temp = head;
        p = head->ptr;
        while(p->ptr != NULL){
            p = p->ptr;
            temp = temp->ptr;
        }
        temp->ptr = NULL;
        printf("Deleting data = %d\n", p->data);
        free(p);
    }
}

void delany              (int position) {
    struct node *temp, *t;

    if(head == NULL)
        printf("Cannot delete\n");
    else if(position==1 && head->ptr==NULL) {
        temp = head;
        head = NULL;
        printf("Deleted data = %d\n", temp->data);
        free(temp);
    } else if(position == 1) {
        temp = head;
        head = head->ptr;
        printf("Deleted data = %d\n", temp->data);
        free(temp);
    } else {
        temp = head;
        for(int i=1; i<position-1; i++) {
            temp = temp->ptr;
        }
        t = temp->ptr;
        temp->ptr = t->ptr;
        printf("Deleted data = %d\n", t->data);
        free(t);
    }
}

void display(){
    struct node *temp;

    if(head == NULL){
        printf("List is e   } else {
        printf("\nThe linked list : \n");
        for(temp=head; temp!=NULL; temp=temp->ptr)
            printf("%d ", temp->data);
        printf("\n");
    }
}
