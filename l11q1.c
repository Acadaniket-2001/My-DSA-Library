#include <stdio.h>
#include <stdlib.h>

struct node111
{
    int data;
    struct node111 *left,*right;
};

struct node111 *Create111(struct node111 *root)
{

    struct node111 *RInsert111(struct node111 *,int);
    int n,x;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        root = RInsert111(root,x);
    }
    return root;
}

void Preorder111(struct node111 *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        Preorder111(root->left);
        Preorder111(root->right);
    }
}

void Inorder111(struct node111 *root)
{
    if(root != NULL)
    {
        Inorder111(root->left);
        printf("%d ",root->data);
        Inorder111(root->right);
    }
}

void Postorder111(struct node111 *root)
{
    if(root != NULL)
    {
        Postorder111(root->left);
        Postorder111(root->right);
        printf("%d ",root->data);
    }
}

struct node111 * RInsert111(struct node111 *root,int key)
{
    struct node111 *curr,*ptr = root;

    if(root == NULL)
    {
        curr = malloc(sizeof(struct node111));
        curr->data = key;
        curr->left = curr->right = NULL;
        root = curr;
        return root;
    }
    if(key > ptr->data)
    {
        ptr->right = RInsert111(ptr->right,key);
    }
    else if(key < ptr->data)
    {
        ptr->left = RInsert111(ptr->left,key);
    }
    return root;
}

struct node111 * Insucc111(struct node111 *root)
{
    if(root != NULL  &&  root->right != NULL)
    {
        struct node111 *ptr = root->right;
        while(ptr->left != NULL)
        {
            ptr = ptr->left;
        }
        return ptr;
    }
    return NULL;
}

struct node111 * Inpre111(struct node111 *root)
{
    if(root != NULL  &&  root->left != NULL)
    {
        struct node111 *ptr = root->left;
        while(ptr->right != NULL)
        {
            ptr = ptr->right;
        }
        return ptr;
    }
    return NULL;
}

int height111(struct node111 *root)
{
    if(root != NULL)
    {
       int x = height111(root->left);
       int y = height111(root->right);
       return (x>y ? x+1 : y+1);
    }
    return 0;
}

struct node111 *RDelete111(struct node111 *root,int key)
{
    struct node111 *temp;
    if(root == NULL)
    {
        return NULL;
    }
    if((root->data == key)  &&  ((root->left == NULL)  &&  (root->right ==  NULL)))
    {
        struct node111 *ptr = root;
        free(ptr);
        root = NULL;
        return root;
    }
    if(key < root->data)
    {
        root->left = RDelete111(root->left,key);
    }
    else if(key > root->data)
    {
        root->right = RDelete111(root->right,key);
    }
    else
    {
        if(height111(root->left) >= height111(root->right))
        {
            temp = Inpre111(root);
            root->data = temp->data;
            root->left = RDelete111(root->left,temp->data);
        }
        else
        {
            temp = Insucc111(root);
            root->data = temp->data;
            root->right = RDelete111(root->right,temp->data);
        }
    }
    return root;
}

struct node111 * Smallest111(struct node111 * root)
{
    if(root != NULL)
    {
        while(root->left != NULL)
        {
            root = root->left;
        }
        // printf("\nSmallest Element : %d\n",root->data);
        return root;
    }
}

void Largest111(struct node111 * root)
{
    if(root != NULL)
    {
        while(root->right != NULL)
        {
            root = root->right;
        }
        printf("\nEmallest Element : %d\n",root->data);
    }
}

int count_node111s(struct node111 *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int x = count_node111s(root->left);
        int y = count_node111s(root->right);
        return x+y+1;
    }
    // return 0;
}

int count_non_leaf111(struct node111 *root)
{
    if(root != NULL)
    {
        int x = count_non_leaf111(root->left);
        int y = count_non_leaf111(root->right);
        if((root->left || root->right))
        {
            return x+y+1;
        }
        else
        {
            return x+y;
        }
    }
    return 0;
}

int count_leaf111(struct node111 *root)
{
    if(root != NULL)
    {
        int x = count_leaf111(root->left);
        int y = count_leaf111(root->right);
        if(!root->left  &&  !root->right)
        {
            return x+y+1;
        }
        else
        {
            return x+y;
        }
    }
}

int sum111(struct node111 *root)
{
    if(root != NULL)
    {
        return sum111(root->left) + sum111(root->right) + root->data;
    }
    return 0;
}

int l11q1()
{
    struct node111 *root = NULL;
    printf("\n\n\tThe Operations Available on BST Are :-\n");
    printf("0. Quit\n");
    printf("1. Create ( Compulsory )\n");
    printf("2. Pre-Order Traversal\n");
    printf("3. In-Order Traversal\n");
    printf("4. Post-Order Traversal\n");
    printf("5. Find Smallest Element\n");
    printf("6. Find Largest Element\n");
    printf("7. Insert an Element\n");
    printf("8. Delete an Element\n");
    printf("9. Count Leaf nodes\n");
    printf("10. Count Non-leaf nodes\n");
    printf("11. Count nodes\n");
    printf("12. Sum of all the nodes\n");
    int choice,key;
    do
    {
        printf("\t\tEnter Your Choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0: printf("\n------------Bye,Bye BST Operations over.-------------");break;
            case 1: root = Create111(root);break;
            case 2: 
                    printf("\nPreorder : ");
                    Preorder111(root);
                    printf("\n");break;
            case 3: 
                    printf("\nInorder : ");
                    Inorder111(root);
                    printf("\n");break;
            case 4: 
                    printf("\nPostorder : ");
                    Postorder111(root);
                    printf("\n");break;

            case 5: printf("\nSmallest Element : %d\n",(Smallest111(root))->data); break;
            case 6: Largest111(root); break;
            case 7: 
                    printf("Enter the Element : ");
                    scanf("%d",&key);
                    root = RInsert111(root,key); break;
            case 8: 
                    printf("Enter the key to delete : ");
                    scanf("%d",&key);
                    RDelete111(root,key); break;

            case 9: printf("Total Leaf nodes : %d\n",count_leaf111(root)); break;
            case 10: printf("Total Non-leaf nodes : %d\n",count_non_leaf111(root)); break;
            case 11: printf("Total Nodes : %d\n",count_node111s(root)); break;
            case 12: printf("Sum of all nodes : %d\n",sum111(root));
        }
    }while(choice != 0);
 
    return 0;
}
