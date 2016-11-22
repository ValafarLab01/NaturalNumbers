/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 16, 2016, 2:28 PM
 */

#include <cstdlib>
#include "intArray.h"

/*
 * 
 */
int main(int argc, char** argv) {
    intArray Array1(5, 1);
    intArray Array2(5, 2);
    intArray Array3(5, 3);
    intArray Array4(Array3);
    
    //    cout << "Array2: " << endl;
    //    Array2.Print();
    //    cout << "Array3: " << endl;
    //    Array3.Print();
    //
    //    cout << "Array2: " << endl;
    //    Array2 + 30;
    //    Array2.Print();
    //
    //    Array1 + Array2;
    //    cout << "Array1 + Array2: " << endl;
    //    Array1.Print();
    //    Array1.PrintSize();
    //    
    //    Array1 + 15;
    //    Array1.Print();
    //    Array1.PrintSize();
    //   
    //    if(Array1 == Array2) {
    //        cout << "Array1 == Array2" << endl;
    //    } else {
    //        cout << "Array1 != Array2" << endl;
    //    }
    //    
    //    cout << Array1[0] << " " << Array2[0] << endl;
    cout << "Array1 before:" << endl;
    cout << Array1 << endl;
    cout << "Array2 before:" << endl;
    cout << Array2 << endl;
    cout << "Array3 before:" << endl;
    cout << Array3 << endl;
    cout << "Array4 before:" << endl;
    cout << Array4 << endl;
    cout << "Array4 size: " << Array4.getSize() << endl;    
    Array4 = Array3 + Array1 + Array2;
    cout << "Array4 size: " << Array4.getSize() << endl;
    
    cout << "Array1 after:" << endl;
    cout << Array1 << endl;
    cout << "Array2 after:" << endl;
    cout << Array2 << endl;
    cout << "Array3 after:" << endl;
    cout << Array3 << endl;
    cout << "Array4 after:" << endl;
    cout << Array4 << endl;
    
    Array4[5] = -50;
    cout << Array4;

    return 0;
}

