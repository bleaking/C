typedef struct node* t;
typedef struct node{
	int data;
	t next;
}node;
//void insert(t*,int,int);
void dlt(t*,int);
t create(int);
void traverse(t);
