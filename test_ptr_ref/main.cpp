#include <iostream>

using namespace std;

struct vlad {
    int value;
    vlad(int i) : value(i){};
};

struct test {
    vlad *ptr;
};

struct test2 {
    test* value1;
    vlad *&ptr;
    test2(test* val) : value1(val), ptr(val->ptr) {};
};


int main(){

	vlad i(100), j(200);
    
	test A;
    A.ptr = &i;
    
    test2 B(&A);
    cout << i.value << "     " << j.value << "     " << B.ptr->value << "     " << A.ptr->value << endl;
    
    A.ptr = &j;
    cout << i.value << "     " << j.value << "     " << B.ptr->value << "     " << A.ptr->value << endl;
    
    i.value = 300;
    cout << i.value << "     " << j.value << "     " << B.ptr->value << "     " << A.ptr->value << endl;
    
    j.value = 400;
    cout << i.value << "     " << j.value << "     " << B.ptr->value << "     " << A.ptr->value << endl;
    
    A.ptr->value = 500;
    cout << i.value << "     " << j.value << "     " << B.ptr->value << "     " << A.ptr->value << endl;
    
	return 0;
}
