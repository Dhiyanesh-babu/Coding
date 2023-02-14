
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};


struct queuee
{
	node *front, *rear;
	queue()
	{
		front = NULL;
		rear = NULL;
	}
	void enqueue(int x)
	{
		cout<<"hi";
		node *temp = new node(x);
		if(front==NULL)
		{
			front->next = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}

	void dequeue()
	{
		if(front==NULL)
			return;
		node *temp = front;
		front = front->next;
		if(front==NULL)
			rear = NULL;
		delete(temp);

	}
};

int main()
{

    queuee q;
    int a ;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(30);
    cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
    cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}