/*
MADE BY CHATGPT
*/

#include "main_lib.hpp"
#include <cstdio>

using namespace std;
// 1. La méthode traditionnelle
void helloWorld1() {
	std::cout << "Hello, World!" << std::endl;
}

// 2. Utilisation de la fonction printf de la bibliothèque C
void helloWorld2() {
	printf("Hello, World!\n");
}

// 3. Utilisation de la fonction puts de la bibliothèque C
void helloWorld3() {
	puts("Hello, World!");
}

// 4. Utilisation de macros
#define HELLO_WORLD "Hello, World!"
void helloWorld4() {
	std::cout << HELLO_WORLD << std::endl;
}

// 5. Utilisation de pointeurs de fonctions
void helloWorld5() {
	void (*hello)() = helloWorld1;
	hello();
}

// 6. Utilisation de tableaux de pointeurs de fonctions
void (*helloFunctions[])(void) = {helloWorld1, helloWorld2, helloWorld3};
void helloWorld6() {
	helloFunctions[0]();
}

// 7. Utilisation de pointeurs de fonctions avec typedef
typedef void (*HelloFunctionPtr)();
HelloFunctionPtr helloFunction = helloWorld1;
void helloWorld7() {
	helloFunction();
}

// 8. Utilisation de classes et de méthodes
class HelloWorldClass {
public:
	void print() {
		std::cout << "Hello, World!" << std::endl;
	}
};
void helloWorld8() {
	HelloWorldClass hello;
	hello.print();
}

// 9. Utilisation de pointeurs de classe et de méthodes
class HelloWorldClass2 {
public:
	void print() {
		std::cout << "Hello, World!" << std::endl;
	}
};
void helloWorld9() {
	HelloWorldClass2 hello;
	void (HelloWorldClass2::*print)() = &HelloWorldClass2::print;
	(hello.*print)();
}

// 10. Utilisation de fonctions récursives
void helloWorld10(int n) {
	if (n > 0) {
		helloWorld10(n - 1);
	}
	else {
		std::cout << "Hello, World!" << std::endl;
	}
}

void add_code()
{
    helloWorld1();
    helloWorld2();
    helloWorld3();
    helloWorld4();
    helloWorld5();
    helloWorld6();
    helloWorld7();
    helloWorld8();
    helloWorld9();
    helloWorld10(1);
}