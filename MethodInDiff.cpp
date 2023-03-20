//
// Created by leogo on 10/03/23.
//
#include <iostream>
#include <string>

using namespace std;

int get_string_length(string input_string) {
    int string_length = input_string.length();
    return string_length;
}

int main() {
    string input_string = "Hello, World!";
    int length = get_string_length(input_string);
    cout << "The length of the string \"" << input_string << "\" is " << length << endl;
    return 0;
}