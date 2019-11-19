#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node * NODE;
NODE getnode() {
    NODE p = (NODE)malloc(sizeof(struct node));
    if(p!=NULL)
    return p;
    else {
        printf("Memory allocation failed!\n");
        exit(0);
    }
}

NODE insert(NODE head,int ele) {
    NODE p,q;
    q = getnode();
    q->data = ele;
    if(head == NULL)
    return q;
    p = head;
    while(p->next!=NULL) {
        p = p->next;
    }
    p->next = q;
    q->next = NULL;
    q->prev = p;
    return head;
}

NODE delete(NODE head,int value) {
    NODE p;
    if(head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    if(head->next == NULL) {
        if(head->data == value) {
            free(head);
            return NULL;
        }
        else {
        printf("Element not found!\n");
        return head;
    }
    }
    p = head;
    while(p!=NULL) {
        if(p->data == value) {
            if(p->prev!=NULL) {
                p->prev->next = p->next;
            }
            else {
                head = p->next;
            }
            if(p->next!=NULL) {
                p->next->prev = p->prev;
            }
            free (p);
            return head;
        }
    p = p->next;
    }
    if( p == NULL) {
        printf("Element not found!\n");
        return head;
    }
}
void display(NODE head) {
    NODE p;
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    p=head;
    while(p!=NULL) {
        printf("%d\n",p->data);
        p = p->next;
    }
}

NODE insertleft(NODE head, int ele,NODE n) {

NODE newn = getnode();
NODE p;
newn->data = ele;
if(head == n) {
	newn->next = n;
	n->prev = newn;
	newn->prev = NULL;
	newn = head;
	return head;
	}
n->prev->next = newn;
newn->prev = n->prev;
newn->next = n;
n->prev = newn;
return head;
}

int main() {
    NODE head = NULL;
    int ch,n,i,value,ch1,ele,p,count=0;
    do {
        printf("*** Enter your choice ***\n");
        printf("\n1 TO INSERT\n2 TO DELETE a SPECIFIC VALUE\n3 TO INSERT TO THE LEFT OF A NODE\n4 TO DISPLAY\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("Enter the number of elements to be inserted:\n");
                scanf("%d",&n);
                for(i=0;i<n;i++) {
                    printf("Enter the ele %d:\n",(i+1));
                    scanf("%d",&ele);
                    head = insert(head,ele);
                }
                break;
        case 2: printf("Enter the element to be deleted:\n");
                scanf("%d",&value);
                head = delete(head,value);
                break;
	case 3: printf("Enter the element to be inserted:\n");
		scanf("%d",&ele);
		printf("Enter the position:\n");
		scanf("%d",&p);
		NODE q = head;
		count = 0;
		while(q!=NULL) {
			count ++;
			if(count == p)
				head = insertleft(head,ele,q);
			q = q->next;
			}
		break;
        case 4: display(head);
                break; 
        
        default: printf("INVALID ENTRY!\n");
        }
    printf("Do you want to continue? Enter 1 for YES 0 for NO\n");
    scanf("%d",&ch1);
    }while(ch1!=0);
return 1;
}
