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
	int top();
	void push(int element);
	void pop();
	int size();
	bool isEmpty();

	//Constructores
	myStack();
	~myStack();
	myStack(myStack &stack);
	myStack(int *a);
};
