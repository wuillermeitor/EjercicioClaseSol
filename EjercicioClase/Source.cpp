#include <iostream>
#include <stack>
#include "SourceHeader.h"


myStack::myStack() {
	myStack::first = nullptr;
}

myStack::~myStack() {

}

int myStack::top() {
	return first->value;
}

void myStack::push(int element) {
	node *tmp = new node;
	tmp->value = element;
	tmp->next = first;
	first = tmp;
}

void myStack::pop() {
	node *next = nullptr;
}

int myStack::size() {

}

bool myStack::isEmpty() {
	if (first == nullptr) { return true; }
	else { return false; }

}