#pragma once
#include <iostream>

#define top(s) (s).top
#define tabS(s) (s).tabS

using namespace std;

typedef char infotype;
//Muhammad Rizky Fajri 1302204043
struct stack {
	infotype tabS[10];
	int top;
};

void create_stack(stack& s);
bool is_empty(stack s);
bool is_full(stack s);
void push(stack& s, infotype x);
void pop(stack& s, infotype x);
void terima_output(stack& s);
void print_info(stack s);

