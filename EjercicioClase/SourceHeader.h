#pragma once
#include <iostream>
#include <stack>


class myStack {
public:
	struct node {
		int info;
		node *next;
	};
	node *numberone;

	//Métodos
	void pop();
	void push(int element);
	int front();
	bool isEmpty();
	int size();

	//Constructores
	myStack();
	~myStack();
	myStack(myStack &stack);
	myStack(int *a);
};
