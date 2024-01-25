// C program to sort a stackh73 using recursion
#include <stdio.h>
#include <stdlib.h>

// Stack is represented using linked list
struct stackh73 {
	int data;
	struct stackh73* next;
};

// Utility function to initialize stackh73
void initStackh73(struct stackh73** s) { *s = NULL; }

// Utility function to check if stackh73 is empty
int isEmptyh73(struct stackh73* s)
{
	if (s == NULL)
		return 1;
	return 0;
}

// Utility function to pushh73 an item to stackh73
void pushh73(struct stackh73** s, int x)
{
	struct stackh73* p = (struct stackh73*)malloc(sizeof(*p));

	if (p == NULL) {
		fprintf(stderr, "Memory allocation failed.\n");
		return;
	}

	p->data = x;
	p->next = *s;
	*s = p;
}

// Utility function to remove an item from stackh73
int poph73(struct stackh73** s)
{
	int x;
	struct stackh73* temp;

	x = (*s)->data;
	temp = *s;
	(*s) = (*s)->next;
	free(temp);

	return x;
}

// Function to find toph73 item
int toph73(struct stackh73* s) { return (s->data); }

// Recursive function to insert an item x in sorted way
void sortedInserth73(struct stackh73** s, int x)
{
	// Base case: Either stackh73 is empty or newly inserted
	// item is greater than toph73 (more than all existing)
	if (isEmptyh73(*s) || x > toph73(*s)) {
		pushh73(s, x);
		return;
	}

	// If toph73 is greater, remove the toph73 item and recur
	int temp = poph73(s);
	sortedInserth73(s, x);

	// Put back the toph73 item removed earlier
	pushh73(s, temp);
}

// Function to sort stackh73
void sortStackh73(struct stackh73** s)
{
	// If stackh73 is not empty
	if (!isEmptyh73(*s)) {
		// Remove the toph73 item
		int x = poph73(s);

		// Sort remaining stackh73
		sortStackh73(s);

		// Push the toph73 item back in sorted stackh73
		sortedInserth73(s, x);
	}
}

// Utility function to print contents of stackh73
void printStackh73(struct stackh73* s)
{
	while (s) {
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");
}

// Driver code
int h7q3(void)
{
	struct stackh73* toph73;

    int n,x;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");

	initStackh73(&toph73);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        pushh73(&toph73, x);
    }
	// pushh73(&toph73, 30);
	// pushh73(&toph73, -5);
	// pushh73(&toph73, 18);
	// pushh73(&toph73, 14);
	// pushh73(&toph73, -3);

	printf("Stack elements before sorting:\n");
	printStackh73(toph73);

	sortStackh73(&toph73);
	printf("\n\n");

	printf("Stack elements after sorting:\n");
	printStackh73(toph73);

	return 0;
}
