//Imports
#include <iostream>
#include <string.h>
using namespace std;

/*
THIS PROGRAMM MADE WITH C++ COUNTS ANSWER FOR ANY ROMAN NUMBER EXPRESSION, IN FORM OF A+B OR ANY OPERATOR BETWEEN THEM.

SOLUTION WAS MADE FOR E-OLTMP TASK NUMBER 7: https://www.e-olymp.com/en/problems/7
*/



//Create a function, that will return the arabic analog of roman char
int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 

// Returns decimal value of 
// roman numeral 
int romanToDecimal(string& str) { 
    // Initialize result 
    int res = 0; 
  
    // Traverse given input 
    for (int i = 0; i < str.length(); i++) { 
        // Getting value of symbol s[i] 
        int s1 = value(str[i]); 
  
        if (i + 1 < str.length()) { 
            // Getting value of symbol s[i+1] 
            int s2 = value(str[i + 1]); 
  
            // Comparing both values 
            if (s1 >= s2) { 
                // Value of current symbol 
                // is greater or equal to 
                // the next symbol 
                res = res + s1; 
            } 
            else { 
                // Value of current symbol is 
                // less than the next symbol 
                res = res + s2 - s1; 
                i++; 
            } 
        } 
        else { 
            res = res + s1; 
        } 
    } 
    return res; 
}

int printRoman(int number) 
{ 
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;     
    while(number>0){ 
      int div = number/num[i]; 
      number = number%num[i]; 
      while(div--){ 
        cout<<sym[i] << "\n"; 
      } 
      i--; 
    }
    return 0; 
}

int main() {
	//Variables
	string input, first_number_roman, second_number_roman;
	char math_operator;
	int math_operator_index, first_number_arab, second_number_arab, result, ans;
	//Getting input
	cin >> input;
	//Dividing input into first number, operator and second number
	//Getting index of math_operator
	for (int i = 0; i < input.length(); i++) {
		char character = input.at(i);
		switch(character) {
			case '+':
				math_operator_index = i;
				break;
			case '-':
				math_operator_index = i;
				break;
			case '/':
				math_operator_index = i;
				break;
			case '*':
				math_operator_index = i;
				break;	

		}
	}
	math_operator = input.at(math_operator_index);
	first_number_roman = input.substr(0, math_operator_index);
	second_number_roman = input.substr(math_operator_index+1, input.length());
	//Cout first + operator + second
	//cout << first_number_roman << "\n" <<  math_operator << "\n" <<  second_number_roman << "\n";
	//Transform first and second to arabics
	first_number_arab = romanToDecimal(first_number_roman);
	second_number_arab = romanToDecimal(second_number_roman);
	switch(math_operator){
		case '+':
			ans = first_number_arab + second_number_arab;
			break;
		case '-':
			ans = first_number_arab - second_number_arab;
			break;
		case '*':
			ans = first_number_arab * second_number_arab;
			break;
		case '/':
			ans = first_number_arab / second_number_arab;
			break;
	}
	printRoman(ans);
}