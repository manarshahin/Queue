#include <iostream>
using namespace std;
class Queue
{
private:
	int* queue;
	int rear;
	int front;
	int length;
public:
	Queue(int size)
	{
		queue = new int[size];
		rear = -1;
		front = -1;
		this->length = size;
	}
	~Queue()
	{
		delete[] queue;
	}
	bool isFull()
	{
		return (rear == length - 1);
	}
	bool isEmpty()
	{
		return (front == rear);
	}
	void enQueue(int value)
	{
		if (isFull())
		{
			cout << "Queue overflow";
			exit;
		}
		else
			queue[++rear] = value;
	}
	void deQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty";
			exit;
		}
		else
			queue[front++];
	}
	void print()
	{
		if (isEmpty())
		{
			cout << "Queue is empty";
			exit;
		}
		for (int i = front + 1;i <= rear;i++)
			cout << " " << queue[i] << " ";
	}
};
