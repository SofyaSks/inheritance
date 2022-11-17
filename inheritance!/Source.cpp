#include <iostream>
#include <time.h>
using namespace std;
// protected - защищённые от всех, кроме наследника

class A {
public:

	A() { cout << "Constructor A is Working" << endl; }
	//~A() { cout << "Destructor A is Working" << endl;}
	A(int numa) {
		num_a = numa;
	}

	void f_a() {
		cout << num_a << endl;
	}

	int Get_a() {
		return num_a;
	}


protected:
	int num_a;
};

class B : public A {
public:

	B() { cout << "Constructor B is Working" << endl; }
	//~B() { cout << "Destructor B is Working" << endl; }
	B(int numb, int numa) : A(numa)
	{
		//num_a = numa;
		num_b = numb;
	}

	void f_b() {
		cout << num_a << " " << num_b << endl;
	}
protected:
	int num_b;
};

class C : public B {
public:

	C() { cout << "Constructor C is Working" << endl; }
	//~C() { cout << "Destructor C is Working" << endl; }
	C(int numc, int numb, int numa) {
		num_a = numa;
		num_b = numb;
		num_c = numc;
	}

	void f_c() {
		cout << num_a << " " << num_b << " " << num_c << endl;
	}
private:
	int num_c;
};

int main() {
	srand(time(NULL));

	A a(5);
	a.f_a();
	cout << "********************" << endl;
	B b(/*10,*/ 15);
	b.f_b();
	cout << "********************" << endl;
	C c(20, 30, 40);
	c.f_c();




	return 0;
}