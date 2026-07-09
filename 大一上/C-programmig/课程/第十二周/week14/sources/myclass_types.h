/*myclass types*/
#pragma once

typedef struct Address_T Address;

typedef struct {
    char id[7];
    char name[10];
    int age;
    Address *home;            //指针也需要认识！！！！
} Student;

struct Address_T {
    char area_id[7];
    char *details;
    char post_code[7]; 
//    Student receiver;
};

typedef struct {
    char id[10];
    int  members;  //结构体中不支持VLA 
    Student *students;
} C_Class;

typedef C_Class *CLASS_PTR;
typedef Student *STUDENT_PTR;
