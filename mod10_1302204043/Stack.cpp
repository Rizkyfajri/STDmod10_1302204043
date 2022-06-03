#include "Stack.h"
//Muhammad Rizky Fajri 1302204043
void create_stack(stack& s) {
	top(s) = -1;
}

//Muhammad Rizky Fajri 1302204043
bool is_empty(stack s) {
	if (top(s) == -1) {
		return true;
	}
	else {
		return false;
	}
}

//Muhammad Rizky Fajri 1302204043
bool is_full(stack s) {
	if (top(s) == 10) {
		return true;
	}
	else {
		return false;
	}
}

//Muhammad Rizky Fajri 1302204043
void push(stack& s, infotype x) {
	if (is_full(s) == false) {
		top(s) = top(s) + 1;
		tabS(s)[top(s)] = x;
	}
}

//Muhammad Rizky Fajri 1302204043
void pop(stack& s, infotype x) {
	x = tabS(s)[top(s)];
	top(s) = top(s) - 1;
}

//Muhammad Rizky Fajri 1302204043
void print_info(stack s) {
	for (int i = top(s); i >= 0; i--) {
		cout << tabS(s)[i] << " ";
	}
	cout << endl;
}