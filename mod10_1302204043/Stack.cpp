#include "Stack.h"

void create_stack(stack& s) {
	top(s) = -1;
}

bool is_empty(stack s) {
	if (top(s) == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool is_full(stack s) {
	if (top(s) == 10) {
		return true;
	}
	else {
		return false;
	}
}

