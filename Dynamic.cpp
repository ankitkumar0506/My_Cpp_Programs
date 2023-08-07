#include<iostream>
using namespace std;

class animal {
public:
	void voice() {
		cout << "voice" << endl;
	}
};

class dog : public animal {
public:
	void voice() {
		cout << "woof" << endl;
	}
};

int main() {
	animal* a;
	dog d;
	
	a = &d;
	a->voice();

	return 0;
}
