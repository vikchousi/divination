class Element {
public:
	int data = 0;
	Element* prev;
};


class L {
public:
	L operator+=(int value);
	friend void operator--(L& obj);
	int Size() { return size; };
	int First();
protected:
	int size = 0;
private:
	Element* q;
}; 
