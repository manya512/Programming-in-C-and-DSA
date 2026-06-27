#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *L = NULL;

// Display
void display(){
    struct node *temp = L;

    if(L == NULL){
        printf("List is empty\n");
        return;
    }

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Insert Beginning
void InsertBeginning(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = L;
    L = newnode;

    display();
}

// Insert End
void InsertEnd(int x){
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if(L == NULL){
        L = newnode;
        display();
        return;
    }

    temp = L;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;

    display();
}

// Insert at Position
void insert(int x, int pos){
    struct node *newnode, *temp;
    int i = 1;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;

    if(pos == 1){
        newnode->next = L;
        L = newnode;
        display();
        return;
    }

    temp = L;

    while(i < pos - 1 && temp != NULL){
        temp = temp->next;
        i++;
    }

    if(temp != NULL){
        newnode->next = temp->next;
        temp->next = newnode;
    }
    else{
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    display();
}

// Delete Beginning
void DeleteBeginning(){
    struct node *temp;

    if(L == NULL){
        printf("List is empty\n");
        return;
    }

    temp = L;
    L = L->next;
    free(temp);

    display();
}

// Delete End
void DeleteEnd(){
    struct node *temp, *prev;

    if(L == NULL){
        printf("List is empty\n");
        return;
    }

    if(L->next == NULL){
        free(L);
        L = NULL;
        display();
        return;
    }

    temp = L;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);

    display();
}

// Delete at Position
void DeletePosition(int position){
    struct node *temp, *prev;
    int i = 1;

    if(L == NULL){
        printf("List is empty\n");
        return;
    }

    temp = L;

    if(position == 1){
        L = L->next;
        free(temp);
        display();
        return;
    }

    while(i < position && temp != NULL){
        prev = temp;
        temp = temp->next;
        i++;
    }

    if(temp != NULL){
        prev->next = temp->next;
        free(temp);
    }
    else{
        printf("Invalid position\n");
        return;
    }

    display();
}

// Search
void search(int x){
    struct node *temp = L;

    while(temp != NULL){
        if(temp->data == x){
            printf("Found\n");
            return;
        }
        temp = temp->next;
    }

    printf("Not Found\n");
}

// Retrieve
int retrieve(int position){
    struct node *temp = L;
    int i = 1;

    while(i < position && temp != NULL){
        temp = temp->next;
        i++;
    }

    if(temp != NULL)
        return temp->data;

    return -1;
}

// Check empty
void isEmpty(){
    if(L == NULL)
        printf("List is empty\n");
    else
        printf("List is not empty\n");
}

// Main
int main(){
    int choice, x, pos;

    while(1){
        printf("\n------ LIST ADT ------\n");
        printf("1.Insert Beginning\n2.Insert End\n3.Insert Position\n4.Delete Beginning\n5.Delete End\n6.Delete Position\n7.Search\n8.Retrieve\n9.Check Empty\n10.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Enter value: ");
                scanf("%d",&x);
                InsertBeginning(x);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&x);
                InsertEnd(x);
                break;

            case 3:
                printf("Enter value and position: ");
                scanf("%d %d",&x,&pos);
                insert(x,pos);
                break;

            case 4:
                DeleteBeginning();
                break;

            case 5:
                DeleteEnd();
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d",&pos);
                DeletePosition(pos);
                break;

            case 7:
                printf("Enter value: ");
                scanf("%d",&x);
                search(x);
                break;

            case 8:
                printf("Enter position: ");
                scanf("%d",&pos);
                printf("Element: %d\n", retrieve(pos));
                break;

            case 9:
                isEmpty();
                break;

            case 10:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
