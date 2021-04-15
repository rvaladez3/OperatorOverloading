#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

using namespace std;


class Counter{
    public:

    static int count;
    int ID;


    Counter() : ID(count++){
        cout<<"Object "<<ID<<" has been created"<<endl;
    }

    ~Counter(){
        cout<<"Object "<<ID<<" has been deleted"<<endl;

    }



    void * operator new(size_t size){
        cout<<"Creating a new Object"<<endl;
        void * counter = ::operator new(size);
        return counter;
    }

    void * operator delete(void* count){
        cout<<"Deleting Object"<<endl;
        delete count;

    }
};



#endif
