#pragma once
#include <iostream>

class Stack
{
private:
	int* data = nullptr;
	size_t capacity, size;
public:
	Stack();
	Stack(const Stack& other);
	Stack operator =(const Stack& other);
	void push(int val);
	int pop();
	void multiPop(size_t size_);
	bool isEmpty();
	void show();

};