struct node{
	int data;
	struct node* next;
};
int enqueue(int);
int dequeue();
void peek();
static struct node* front;
static struct node* rear;
