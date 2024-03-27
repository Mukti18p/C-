#include<iostream>

class Test{
	int *ip;
public:
	Test(int i = 0) {
		ip = new int;
		*ip = i;
		std::cout << "Constructor called ";
		std::cout << *ip << std::endl;
	}
	void print() {
		std::cout << *ip << std::endl;
	}
	~Test() {
		std::cout << "Destructor called ";
		std::cout << *ip << std::endl;
		delete ip;
	}
};

Test gt;

int main() {

	std::cout << "Inside main function\n";

	Test lt(9);
	Test &dt = *(new Test(5));
	
	gt.print();
	lt.print();
	dt.print();

	delete &dt;
	std::cout << "main is about to end\n";
	return 0;
}
