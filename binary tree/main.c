#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *right,*left;
}*root,*p,*q;
struct node *make(int y)
{
 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=y;
 newnode->right=newnode->left=NULL;
 return(newnode);
}
void left(struct node *r,int x)
{
 if(r->left!=NULL)
 printf("\n Invalid!");
 else
 r->left=make(x);
}
void right(struct node *r,int x)
{
 if(r->right!=NULL)
 printf("\n Invalid!");
 else
 r->right=make(x);
}
void inorder(struct node *r)
{
 if(r!=NULL)
 {
 inorder(r->left);
 printf("\t %d",r->data);
 inorder(r->right);
 }
}
void preorder(struct node *r)
{
 if(r!=NULL)
{
 printf("\t %d",r->data);
 preorder(r->left);
 preorder(r->right);
}
}
void postorder(struct node *r)
{
 if(r!=NULL)
{
 postorder(r->left);
 postorder(r->right);
 printf("\t %d",r->data);
}
}
void main()
{
 int no;
 int choice;
 printf("\n Enter the root:");
 scanf("%d",&no);
 root=make(no);
 p=root;
 while(1)

{
 printf("\n Do you want to enter another node? ");
 printf("\n 1. Yes");
 printf("\n 2. No");
 printf("\n Enter your choice: ");
 scanf("%d",&choice);
 if(choice==1)

{
 printf("\n Enter another no:");
 scanf("%d",&no);
 while(1)

{
p=root;
q=root;
while((no!=p->data)&&(q!=NULL))
{
 p=q;
 if(no<p->data)
 q=p->left;
 else
 q=p->right;
}
if(no<p->data)
{
 printf("\n Left branch of %d is %d",p->data,no);
 left(p,no);
 break;
}
else
{
 right(p,no);
 printf("\n Right branch of %d is %d",p->data,no);
 break;
}
 }
 }
 else if(choice==2)
 break;
 else
 {
 printf("\n Wrong Choice!");
 continue;
 }
 }
 while(1)
 {
 printf("\n 1. Inorder traversal\n 2. Preorder traversal\n 3. Postorder traversal\n 4. Exit");
 printf("\n Enter your choice:");
 scanf("\%d",&choice);
 switch(choice)
 {
 case 1:
 inorder(root);
 break;
 case 2:
 preorder(root);
 break;
 case 3:
 postorder(root);
 break;
 case 4:
 exit(1);
 default:
 printf("\n Invalid choice!");
 break;
 }
 getch();
 }
}


