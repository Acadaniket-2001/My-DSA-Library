# include<stdio.h>
# define MAX 5

int deque_arr84[MAX];
int left84 = -1;
int right84 = -1;

/*Begin of insert_right8484*/
void insert_right8484()
{
	int added_item;
	if((left84 == 0 && right84 == MAX-1) || (left84 == right84+1))
	{	printf("Queue Overflow\n");
		return;}
	if (left84 == -1)  /* if queue is initially empty */
	{	left84 = 0;
		right84 = 0;}
	else
	if(right84 == MAX-1)  /*right84 is at last position of queue */
		right84 = 0;
	else
		right84 = right84+1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arr84[right84] = added_item ;
}
/*End of insert_right8484*/

/*Begin of insert_left8484*/
void insert_left8484()
{	int added_item;
	if((left84 == 0 && right84 == MAX-1) || (left84 == right84+1))
	{	printf("Queue Overflow \n");
		return;	 }
	if (left84 == -1)/*If queue is initially empty*/
	{	left84 = 0;
		right84 = 0;	 }
	else
	if(left84== 0)
		left84=MAX-1;
	else
		left84=left84-1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arr84[left84] = added_item ;	 }
/*End of insert_left8484*/

/*Begin of delete_left8484*/
void delete_left8484()
{	if (left84 == -1)
	{	printf("Queue Underflow\n");
		return ;	}
	printf("Element deleted from queue is : %d\n",deque_arr84[left84]);
	if(left84 == right84) /*Queue has only one element */
	{	left84 = -1;
		right84=-1;	 }
	else
		if(left84 == MAX-1)
			left84 = 0;
		else
			left84 = left84+1;
}
/*End of delete_left8484*/

/*Begin of delete_right8484*/
void delete_right8484()
{if (left84 == -1)
	{printf("Queue Underflow\n");
		return ;	 }
	printf("Element deleted from queue is : %d\n",deque_arr84[right84]);
	if(left84 == right84) /*queue has only one element*/
	{	left84 = -1;
		right84=-1;	 }
	else
		if(right84 == 0)
			right84=MAX-1;
		else
			right84=right84-1;	}
/*End of delete_right8484*/
/*Begin of input_que84*/
void display_queue84()
{	int front_pos = left84,rear_pos = right84;
	if(left84 == -1)
	{	printf("Queue is empty\n");
		return;	 }
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
	{	while(front_pos <= rear_pos)
		{	printf("%d ",deque_arr84[front_pos]);
			front_pos++;	}	}
	else
	{	while(front_pos <= MAX-1)
		{	printf("%d ",deque_arr84[front_pos]);
			front_pos++;	}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{	printf("%d ",deque_arr84[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
/*End of display_queue84*/
/*Begin of input_que84*/
void input_que84()
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
			insert_right8484();
			break;
		 case 2:
			delete_left8484();
			break;
		 case 3:
			delete_right8484();
			break;
		 case 4:
			display_queue84();
			break;
		 case 5:
            break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
/*End of input_que84*/

/*Begin of output_que84*/
void output_que84()
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
			insert_right8484();
			break;
		 case 2:
			insert_left8484();
			break;
		 case 3:
			delete_left8484();
			break;
		 case 4:
			display_queue84();
			break;
		 case 5:
			break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
/*End of output_que84*/

/*Begin of main*/
int l8q4()
{
	int choice;
	printf("1.Input restricted dequeue\n");
	printf("2.Output restricted dequeue\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1 :
		input_que84();
		break;
	 case 2:
		output_que84();
		break;
	 default:
		printf("Wrong choice\n");
	}
	return 0;
}
/*End of main*/