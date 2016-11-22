/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nnArray.h
 * Author: homayoun
 *
 * Created on November 22, 2016, 11:50 AM
 */

#ifndef NNARRAY_H
#define NNARRAY_H
#include "intArray.h"

class nnArray : public intArray {
public:
    nnArray();
    nnArray(int _size, int content);
    nnArray(const nnArray& orig);
    virtual ~nnArray();
private:

};

#endif /* NNARRAY_H */

