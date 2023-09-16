#include<iostream>

#include"add.h"
#include"div.h"
#include"resultprint.h"


using namespace std;


int main(){
	float first_no, second_no, result_add, result_div;

	cout<<"Enter first number\t";
	cin>> first_no;
        cout<<"Enter second number\t";
	cin>> second_no;
	result_add = add(first_no, second_no);
	result_div = div(first_no, second_no);
	print_result("Addition = ", result_add);
	print_result("Division = ", result_div);
	return 0;
}


