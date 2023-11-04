#include <iostream>

// Pure virtual function example 
// kuch nahi hai bass nam karan ho raha hai

using namespace std;

class base{
	public:
		virtual void add() = 0;
};

class child:public base{
	public:
		void add(){
			cout << "I am child" << endl;
		}
};

int main(){
	base *bptr;
	child c1;

	bptr = &c1;

	bptr->add();

	return 0;
}
