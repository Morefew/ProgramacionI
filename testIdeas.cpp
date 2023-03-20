//
// Created by leogo on 2/10/23.
//
#include <iostream>
#include <cstdlib>
#include "ostream"
using namespace std;

//void bubbleSort(int arr[], int n) {
//    bool swapped;
//    for (int i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            }
//        }
//        if (swapped == false)
//            break;
//    }
//}

void printNum(int *numPtr) {
    cout << &numPtr << endl;
}

int main(){

    int num = 5;
    printNum(&num);


//system("clear");
//cout<< "Hello"<<
//flush; //flush forces the printing to the screen before it clears
//system ("clear");
//cout<< "Good-Bye"<<
//endl;
//
//    void bubbleSort(int arr[], int n) {
//        bool swapped;
//        for (int i = 0; i < n - 1; i++) {
//            swapped = false;
//            for (int j = 0; j < n - i - 1; j++) {
//                if (arr[j] > arr[j + 1]) {
//                    swap(arr[j], arr[j + 1]);
//                    swapped = true;
//                }
//            }
//            if (swapped == false)
//                break;
//        }
//    }


    return 0;
}