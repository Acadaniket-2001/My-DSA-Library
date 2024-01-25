# include<stdio.h>
# define MAX 5

int deque_arrh84[MAX];
int lefth84 = -1;
int righth84 = -1;

/*Begin of insert_righth84*/
void insert_righth84()
{
	int added_item;
	if((lefth84 == 0 && righth84 == MAX-1) || (lefth84 == righth84+1))
	{	printf("Queue Overflow\n");
		return;}
	if (lefth84 == -1)  /* if queue is initially empty */
	{	lefth84 = 0;
		righth84 = 0;}
	else
	if(righth84 == MAX-1)  /*righth84 is at last position of queue */
		righth84 = 0;
	else
		righth84 = righth84+1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arrh84[righth84] = added_item ;
}
/*End of insert_righth84*/

/*Begin of insert_lefth84*/
void insert_lefth84()
{	int added_item;
	if((lefth84 == 0 && righth84 == MAX-1) || (lefth84 == righth84+1))
	{	printf("Queue Overflow \n");
		return;	 }
	if (lefth84 == -1)/*If queue is initially empty*/
	{	lefth84 = 0;
		righth84 = 0;	 }
	else
	if(lefth84== 0)
		lefth84=MAX-1;
	else
		lefth84=lefth84-1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arrh84[lefth84] = added_item ;	 }
/*End of insert_lefth84*/

/*Begin of delete_lefth84*/
void delete_lefth84()
{	if (lefth84 == -1)
	{	printf("Queue Underflow\n");
		return ;	}
	printf("Element deleted from queue is : %d\n",deque_arrh84[lefth84]);
	if(lefth84 == righth84) /*Queue has only one element */
	{	lefth84 = -1;
		righth84=-1;	 }
	else
		if(lefth84 == MAX-1)
			lefth84 = 0;
		else
			lefth84 = lefth84+1;
}
/*End of delete_lefth84*/

/*Begin of delete_righth84*/
void delete_righth84()
{if (lefth84 == -1)
	{printf("Queue Underflow\n");
		return ;	 }
	printf("Element deleted from queue is : %d\n",deque_arrh84[righth84]);
	if(lefth84 == righth84) /*queue has only one element*/
	{	lefth84 = -1;
		righth84=-1;	 }
	else
		if(righth84 == 0)
			righth84=MAX-1;
		else
			righth84=righth84-1;	}
/*End of delete_righth84*/
/*Begin of input_queh84*/
void display_queueh84()
{	int front_pos = lefth84,rear_pos = righth84;
	if(lefth84 == -1)
	{	printf("Queue is empty\n");
		return;	 }
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
	{	while(front_pos <= rear_pos)
		{	printf("%d ",deque_arrh84[front_pos]);
			front_pos++;	}	}
	else
	{	while(front_pos <= MAX-1)
		{	printf("%d ",deque_arrh84[front_pos]);
			front_pos++;	}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{	printf("%d ",deque_arrh84[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
/*End of display_queueh84*/
/*Begin of input_queh84*/
void input_queh84()
{	int choice;
	do
	{	printf("1.Insert at right\n");
		printf("2.Delete from left\n");
		printf("3.Delete from right\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{	case 1:
			insert_righth84();
			break;
		 case 2:
			delete_lefth84();
			break;
		 case 3:
			delete_righth84();
			break;
		 case 4:
			display_queueh84();
			break;
		 case 5:
            break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
/*End of input_queh84*/

/*Begin of output_queh84*/
void output_queh84()
{	int choice;
	do
	{	printf("1.Insert at right\n");
		printf("2.Insert at left\n");
		printf("3.Delete from left\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			insert_righth84();
			break;
		 case 2:
			insert_lefth84();
			break;
		 case 3:
			delete_lefth84();
			break;
		 case 4:
			display_queueh84();
			break;
		 case 5:
			break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
/*End of output_queh84*/

/*Begin of h8q4*/
int h8q4()
{	int choice;
	printf("1.Input restricted dequeue\n");
	printf("2.Output restricted dequeue\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1 :
		input_queh84();
		break;
	 case 2:
		output_queh84();
		break;
	 default:
		printf("Wrong choice\n");
	}
	return 0;
}
/*End of h8q4*/