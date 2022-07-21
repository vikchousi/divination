#include "list.h"
#include <iostream>
using namespace std;

L L::operator+=(int value) {
	Element* e = new(Element);
	e->data = value;
	e->prev = q;
	q = e;
	size++;
	return *this;
}


void operator--(L& obj) {
	int temp = obj.size;
	if ((obj.size != 0) && (obj.size != 1)) {
		Element* e = obj.q;
		while (temp != 2) {
			e = e->prev;
			temp--;
		}
		delete e->prev;
		obj.size--;
	}
	else if (obj.size == 1) {
		Element* e = obj.q;
		delete e;
		obj.size--;
	}
}


int L::First() {
	int temp = size;
	Element* e = q;
	while (temp != 1) {
		e = e->prev;
		temp--;
	}
	return e->data;
}
