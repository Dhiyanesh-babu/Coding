#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// efficient circular queue
struct queue
{
	int *arr;
	int front, rear, size;
	queue(int c)
	{
		size = c;
		front = -1;
		rear = -1;
		arr = new int[c];
	}
	int enqueue(int value)
	{

		if ((front == 0 && rear == size-1) ||
            (rear == (front-1)%(size-1)))
		    {
		        printf("\nQueue is Full");
		        return 0;
		    }
 
	    else if (front == -1) 
		    {
		        front = rear = 0;
		        arr[rear] = value;
		    }

	    else if (rear == size-1 && front != 0)
		    {
		        rear = 0;
		        arr[rear] = value;
		    }
	 
	    else
		    {
		        rear++;
		        arr[rear] = value;
		    }
		return 0;
	}
	int dequeue()
	{
		if (front == -1)
    {
        printf("\nQueue is Empty");
        return INT_MIN;
    }
 
    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;
 
    return data;
	}

	void display()
	{
		cout<<"hi";
		if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
	}


}q(5);




/*
struct queue
{
	int size, cap;
	int *arr;
	queue(int c)
	{
		cap = c;
		size = 0;
		arr = new int[cap];
	}

	bool isfull()
	{
		return (size==cap);
	}

	bool isempty()
	{
		return (size==0);
	}


	int enqueue(int x)
	{
		if(isfull())
			return 0;
		arr[size] = x;
		size++;
	}

	int dequeue()
	{
		if(isempty())
			return 0;
		for(int i=0;i<size-1;i++)
			arr[i] = arr[i+1];
		size--;
	}
 
	 int getfront()
	 {
	 	if(isempty())
	 		return -1;
	 	else
	 		return 0;
	 }

	 int getrear()
	 {
	 	if(isempty())
	 		return -1;
	 	else
	 		return size-1;
	 }

	 int display()
    {
        int i;
        if (isempty())
        	return 0;

        for (i = getfront(); i <= getrear(); i++) 
        {
            cout<<arr[i]<<"\t";
        }
        cout<<"\n";
        return 0;
    }

}q(5);

*/

int main()
{
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.display();
	cout<<"deleted"<<q.dequeue()<<"\n";
	cout<<"deleted"<<q.dequeue()<<"\n";
	cout<<"deleted"<<q.dequeue()<<"\n";
	q.display();
	q.enqueue(50);
	q.enqueue(40);
	q.display();

	
}