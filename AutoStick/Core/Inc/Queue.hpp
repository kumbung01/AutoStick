/*
 * Queue.h
 *
 *  Created on: 2020. 5. 22.
 *      Author: JEONG
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#define MAXVALUE 101 //큐 size

template<class T> class Queue
{
public:
	int front;
	int rear;
	int size;
	T *values;

	Queue(int _size = MAXVALUE)
	{
		size = _size;
		values = new T[size];
		front = 0;
		rear = 0;
	}
	~Queue()
	{
		delete[] values;
	}

	int push(T& value)
	{
		if(!isFull())
		{
			values[rear] = value;
			rear = (rear + 1) % size;
			return 0;
		}
		else
			return 1;
	}

	T pop()
	{
		T ret;
		if(!isEmpty())
		{
			ret = values[front];
			front = (front + 1) % size;
		}
		return ret;
	}

	bool isEmpty()
	{
		if(rear == front)
			return true;
		else
			return false;
	}

	bool isFull()
	{
		if((rear + 1) % size == front)
			return true;
		else
			return false;
	}
};

#endif /* QUEUE_H_ */
