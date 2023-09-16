#include<iostream>

using namespace std;
float add(float num1,float num2){

	return  num1 + num2;
}

float div(float num1,float num2){

	return num1 / num2;
}

void print_result(string result_type, float result_value){

	cout<<result_type << result_value<<endl;
}


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


