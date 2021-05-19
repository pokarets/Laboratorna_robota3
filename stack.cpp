#include "stack.h"


Stack::Stack() : capacity(1), size(0) 
{
	data = new int[1];
}
Stack::Stack(const Stack& other)
{
	this->size = other.size;
	this->capacity = other.capacity;
	this->data = new int[capacity];
	for (size_t i = 0; i < size; ++i)
	{
		this->data[i] = other.data[i];
	}
}
Stack Stack::operator =(const Stack& other)
{
	if (this->data != other.data)
	{
		delete[] this->data;
		this->size = other.size;
		this->capacity = other.capacity;
		this->data = new int[capacity];
		for (size_t i = 0; i < size; ++i)
		{
			this->data[i] = other.data[i];
		}
	}
	return *this;
}
void Stack::push(int val)
{
	if (capacity == size)
	{
		capacity *= 2;
		int* new_data = new int[capacity];
		for (size_t i = 0; i < size; ++i)
		{
			new_data[i] = data[i];
		}
		delete[] data;
		data = new_data;
	}
	data[size++] = val;
}
int Stack::pop()
{
	return data[size--];
}
void Stack::multiPop(size_t size_)
{
	size -= (size_ > size ? size : size_);
}
bool Stack::isEmpty()
{
	return !size;
}
void Stack::show()
{
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << data[i] << ' ';
	}
	std::cout << '\n';
}
