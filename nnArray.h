/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nnArray.h
 * Author: homayoun
 *
 * Created on November 18, 2016, 11:16 AM
 */

#ifndef NNARRAY_H
#define NNARRAY_H
#include "intArray.h"

class nnArray : public intArray {
public:
    nnArray();
    nnArray(int _size, int content);
    nnArray(const nnArray& orig);
    ~nnArray();

    void operator+(int); //This needs to be modified to make sure no negative numbers are added
private:

};

#endif /* NNARRAY_H */

