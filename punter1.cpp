#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>


using namespace std;

int main(){
	
	char c = '6940', d = '9772';
    char *p1 = &c;
	char *p2 = &d;
	char *p3;
	
	p3 = &d;
	cout << "*p3 = " << *p3 << endl; // (1) __________
	p3 = p1;
	cout << "*p3 = " << *p3 // (2) __________
	<< ", p3 = " << p3 << endl; // (3) __________
	*p1 = *p2;
	cout << "*p1 = " << *p1 // (4) __________
 	<< ", p1 = " << p1 << endl; // (5)
 	
	
}
