/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nnArray.cpp
 * Author: homayoun
 * 
 * Created on November 22, 2016, 11:50 AM
 */

#include "nnArray.h"

nnArray::nnArray() : intArray() {
}

nnArray(int _size, int content) : intArray() {

    if (content >= 0) {
        setSize(_size);
        allocData(_size);
        for (int i = 0; i < _size; i++) {
            setData(i, content)
        }
    } else {
        cout << "Natural numbers can't be negative." << endl;
        cout << "The default constructor has been invoked." << endl;
    }
}

nnArray::nnArray(const nnArray& orig) {
}

nnArray::~nnArray() {
}

