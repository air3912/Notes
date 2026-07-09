#ifndef TEST_NEW_H
#define TEST_NEW_H

#include <iostream>
using std::cout;
using std::endl;

int new_del_count = 0;
//#define PRINT_MEM

void* operator new(std::size_t size) {
    void* ptr = malloc(size);
#ifdef PRINT_MEM
    cout<<"new "<< size << " p "<< ptr <<endl;
#endif
    new_del_count++;
    return ptr;
}
void* operator new[](std::size_t size){
    void* ptr = malloc(size);
#ifdef PRINT_MEM
    cout<<"new[] "<< size << " p "<< ptr <<endl;
#endif
    new_del_count++;
    return ptr;
}
void operator delete(void* ptr){
    free(ptr);
#ifdef PRINT_MEM
    cout<<"del "<< ptr <<endl;
#endif
    new_del_count--;
}
void operator delete[](void* ptr) {
    free(ptr);
#ifdef PRINT_MEM
    cout<<"del[] "<< ptr <<endl;
#endif
    new_del_count--;
}

#endif
