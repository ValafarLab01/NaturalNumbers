/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   intArray.h
 * Author: homayoun
 *
 * Created on September 16, 2016, 2:31 PM
 */

#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>
#include <cstdlib>
using namespace std;

class intArray {
    friend ostream & operator<<(ostream &, const intArray &);

public:
    intArray();
    intArray(int _size);
    intArray(int _size, int content);
    intArray(int _size, int anArray[]);
    intArray(const intArray &);
    ~intArray();

    void Print() const;
    void operator+(int);
    intArray operator+(const intArray &);
    bool operator==(const intArray &) const;
    intArray operator=(const intArray &);
    int operator[](int) const;
    int & operator[](int);
    void setData(int index, int value);
    void PrintSize() const;
    int getSize();


private:
    int size;
    int *data;
    void setSize(int);

protected:
    void setSize(int);
    void allocData(int);

};

#endif /* INTARRAY_H */

