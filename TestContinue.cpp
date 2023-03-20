//
// Created by leogo on 2/27/23.
//

#include <iostream>
#include <ctime>
//#include <cstdlib>

class Student{
public:
    std::string studenName;
    Student(std::string n){
        studenName = n;
        std::cout << "\nThis is a parameterized constructor" <<std::endl;

    }
};

int main() {
    int input, sum = 0;
    bool done = false;
    clock_t seconds = clock();

    while (!done) {
        std::cout << "Enter a positive integer (999 quits): ";
        std::cin >> input;
        if (input < 0) {
            std::cout << " Negative value " << input << " ignored\n";
            continue; // skip rest of the body for this iteration
        }
        if (input != 999) {
            std::cout << "Tallying " << input << '\n';
            sum += input;
         } else
            done = true; // 999 entry exits loop
    }
    clock_t other = clock(); // Record the ending of the time

    std::cout <<other<< " seconds\n";
    std::cout <<seconds<< " seconds\n";
    std::cout << static_cast<double>(other-seconds)/CLOCKS_PER_SEC << " seconds\n";
//    bool truebool = true;
//    bool falsebool = false;
//    std::cout << "true = " << truebool << '\n';
//    std::cout << "false = " << falsebool << '\n';
//    std::cout << "done = " << done << '\n';
    std::cout << " sum = " << sum << '\n';
    Student s1("Mary");
    std::cout<<"Student name is: "<< s1.studenName<<std::endl;
    return 0;
}