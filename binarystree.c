#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *lchild;
	struct node *rchild;
	};
typedef struct node *NODE;

void inorder(NODE root) {
	if(root == NULL) 
	return;
	inorder(root->lchild);
	printf("%d\n",root->data);
	inorder(root->rchild);
}

void preorder(NODE root) {
	if(root == NULL) 
	return;
	printf("%d\n",root->data);
	preorder(root->lchild);
	preorder(root->rchild);
}

void postorder(NODE root) {
	if(root == NULL)
	return;
	postorder(root->lchild);
	postorder(root->rchild);
	printf("%d\n",root->data);
}

 NODE getnode(int item){
	NODE p = (NODE)malloc(sizeof(struct node));
	p->data = item;
	p->lchild = NULL;
	p->rchild = NULL;
	return p;
}

NODE insert(NODE root,int item) {
	if(root == NULL)
	return getnode(item);
	if(item<root->data)
	root->lchild = insert (root->lchild,item);
	else if (item>root->data)
	root->rchild = insert (root->rchild,item);
	return root;
}


int main () {
NODE root = NULL;
int ele,ch,ch1;
do {
	printf(" *** ENTER YOUR CHOICE ***\n");
	printf("\n1 TO INSERT\n2 FOR INORDER TRAVERSAL\n3 FOR PREORDER TRAVERSAL\n4 FOR POSTORDER\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: printf("Enter the element:\n");
		scanf("%d",&ele);
		root = insert(root,ele);
		break;
	case 2: inorder(root);
		break;
	case 3: preorder(root);
		break;
	case 4: postorder(root);
		break;
	default: printf("INVALID ENTRY!\n");
	}
printf("DO YOU WANT TO CONTINUE? ENTER 1 for YES 0 for NO:\n");
scanf("%d",&ch1);
}while(ch1!=0);
return 1;
}


