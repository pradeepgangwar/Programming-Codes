#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node NODE;

NODE *insert_node(NODE *root, int a)
{
	NODE *tmp,*parent,*ptr;
	ptr = root;
	parent = NULL;
	while(ptr != NULL)
	{
		parent = ptr;
		if(a > ptr->info)
			ptr = ptr->rchild;
		else if(a < ptr->info)
			ptr = ptr->lchild;
		else
		{
			printf("Duplicate Node\n");
			return root;
		}
	}
	tmp = (NODE *)malloc(sizeof(NODE));
	tmp -> info = a;
	tmp -> lchild = NULL;
	tmp -> rchild = NULL;
	if(parent == NULL)
		root = tmp;
	else if(a < parent->info)
		parent->lchild = tmp;
	else
		parent->rchild = tmp;
	return root;
}

NODE *delete(NODE *root, int a)
{
	NODE *par,*ptr,*child,*succ,*parsucc;
	ptr = root;
	par = NULL;
	while(ptr != NULL)
	{
		if(ptr->info == a)
			break;
		par = ptr;
		if(a < ptr->info)
			ptr = ptr->lchild;
		else
			ptr = ptr->rchild;
	}
	if(ptr == NULL)
	{
		printf("Key Not present in tree\n");
		return root;
	}

	if(ptr->lchild!=NULL && ptr->rchild!=NULL)
	{
		parsucc = ptr;
		succ = ptr->rchild;
		while(succ->lchild !=NULL)
		{
			parsucc = succ;
			succ = succ->lchild;
		}
		ptr->info = succ->info;
		ptr = succ;
		par = parsucc;
	}

	if(ptr->lchild != NULL)
		child = ptr->lchild;
	else 
		child = ptr->rchild;
	if(par == NULL)
		root = child;
	else if(ptr == par->lchild)
		par->lchild = child;
	else
		par->rchild = child;
	free(ptr);
	return root;
}

NODE *search(NODE *ptr, int a)
{
	while(ptr != NULL)
	{
		if(a < ptr->info)
			ptr = ptr->lchild;
		else if(a > ptr->info)
			ptr = ptr->rchild;
		else
			return ptr;
	}
	return NULL;
}

NODE *min_value(NODE *ptr)
{
	if(ptr!=NULL)
	{
		while(ptr->lchild != NULL)
			ptr = ptr->lchild;
	}
	return ptr;
}

NODE *max_value(NODE *ptr)
{
	if(ptr!=NULL)
	{
		while(ptr->rchild != NULL)
			ptr = ptr->rchild;
	}
	return ptr;
}

void preorder(NODE *ptr)
{
	if (ptr == NULL)
		return;
	printf("%d ",ptr->info);
	preorder(ptr->lchild);
	preorder(ptr->rchild);
}

int main()
{
	int n,choice,a;
	NODE *root = NULL,*p;

	while(1)
	{
		printf("1. Insert a Node.\n");
		printf("2. Delete a Node.\n");
		printf("3. Search a Node.\n");
		printf("4. Find minimum value of node.\n");
		printf("5. Find maximum value of node.\n");
		printf("6. Print Preorder traversal\n");

		scanf("%d",&choice);

		if(choice == 1)
		{
			printf("Enter node value: ");
			scanf("%d",&a);
			root = insert_node(root,a);
		}
		else if(choice == 2)
		{
			printf("Enter node value: ");
			scanf("%d",&a);
			root = delete(root,a);
		}
		else if(choice == 3)
		{
			printf("Enter a Node to search for : ");
			scanf("%d",&a);
			p = search(root,a);
			if(p!=NULL)
				printf("One match found\n");
			else
				printf("No match found\n");
		}
		else if(choice == 4)
		{
			p = min_value(root);
			if(p!=NULL)
				printf("minimum value is: %d\n",p->info);
			else
				printf("Tree is empty\n");
		}
		else if(choice == 5)
		{
			p = max_value(root);
			if(p!=NULL)
				printf("maximum value is: %d\n",p->info);
			else
				printf("Tree is empty\n");
		}
		else if (choice == 6)
		{
			preorder(root);
			printf("\n");
		}
	}
}