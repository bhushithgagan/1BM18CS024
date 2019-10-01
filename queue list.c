#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node *NODE;
NODE getnode(){
	NODE p;
	p = (NODE)malloc(sizeof(struct node));
	if (p != NULL)
		return p;
	else{
		printf("Memory not allocated!!");
		exit(0);
	}
}
NODE enqueue(NODE front, int ele){
    NODE p, q;
    p = getnode();
    p->data = ele;
    p->next=NULL;
    q = front;
    if(front == NULL)
     	return p;
    while(q->next != NULL){
        q = q->next;
    }
    q->next = p ;
    return front;
}
NODE dequeue(NODE front){
	if(front == NULL){
		printf("Underflow!!\n");
		return front;
	}
	printf("Dequeued element is %d\n", front->data);
	front = front->next;
	return front;
}
void display(NODE front){
	NODE p;
	if(front == NULL){
		printf("Queue is empty!\n");
		return;
	}
	printf("Elements in Queue are - \n");
	p = front;
	printf("\t");
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}
int main(){
	NODE front = NULL;
	int choice, ele;
	do{
		printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: printf("Enter element to Enqueue - ");
					scanf("%d", &ele);
					front = enqueue(front, ele);
					break;
			case 2: front = dequeue(front);
					break;
			case 3: display(front);
					break;
			case 4: exit(0);
		}
	}while(choice != 4);
	return 0;
}
