#include<iostream>
using namespace std;

#define eleType int

struct SequentiaList {
	eleType* elements;
	int size;
	int capacity;
};

void initializeLits(SequentiaList* list, int capacity) {
	list->elements = new eleType[capacity];
	list->size = 0;
	list->capacity = capacity;
}

void destroyList(SequentiaList* list) {
	delete[]list->elements;
}

int size(SequentiaList* list) {
	return list->size;
}

bool isEmpty(SequentiaList* list) {
	return list->size == 0;
}

void insert(SequentiaList* list, int index, eleType element) {
	if (index<0 || index>list->size) {
		throw std::invalid_argument("Invalid index");
	}
	if (list->size == list->capacity) {
		int newCapacity = list->capacity * 2;
		eleType* newElements = new eleType[newCapacity];
		for (int i = 0; i < list->size; i++) {
			newElements[i] = list->elements[i];
		} 
		delete[]list->elements;
		list->elements = newElements;
		list->capacity = newCapacity;
	}
	for (int i = list->size; i > index; i--) {
		list->elements[i] = list->elements[i - 1];
	}
	list->elements[index] = element;
	list->size++;
}

void deleteElement(SequentiaList* list, int index) {
	if (index<0 || index >= list->size) {
		throw std::invalid_argument("Invalid index");
	}
	for (int i = index; i < list->size - 1; i++) {
		list->elements[i] = list->elements[i + 1];
	}
	list->size--;
}

int findElement(SequentiaList* list, eleType element) {
	for (int i = 0; i < list->size; ++i) {
		if (list->elements[i] == element) {
			return i;
		}
	}
	return -1;
}

int getElement(SequentiaList* list, int index) {
	if (index < 0 || index >= list->size) {
		throw std::invalid_argument("Invalid index");
	}
	return list->elements[index];
}

void updateElement(SequentiaList* list, int index, eleType value) {
	list->elements[index] = value;
}


int main() {
	SequentiaList mylist;
	initializeLits(&mylist, 10);
	for (int i = 0; i < 10; i++) {
		insert(&mylist, i, i * 10);
	}
	cout << "Size:" << size(&mylist) << endl;
	cout << "Is empty:" << isEmpty(&mylist) << endl;

	for (int i = 0; i < size(&mylist); i++) {
		cout << getElement(&mylist, i) << " ";
	}
	cout << endl;
	deleteElement(&mylist, 5);
	updateElement(&mylist, 1, 1314);
	for (int i = 0; i < size(&mylist); i++) {
		cout << getElement(&mylist, i) << " ";
	}
	return 0;
}