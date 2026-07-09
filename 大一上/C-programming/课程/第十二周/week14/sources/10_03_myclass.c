/*myclass*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include"myclass_types.h"

CLASS_PTR createClass(char *name, int cnt);
void freeClass(CLASS_PTR p); 

void readStudents(CLASS_PTR p); 
void writeStudents(CLASS_PTR p);

int main() {
    int cnt_class = 6;
    CLASS_PTR clazz[cnt_class]; //指针数组 
    memset(clazz,0,cnt_class * sizeof(CLASS_PTR));
    
    clazz[0] = createClass("class 1",40);
    
    readStudents(clazz[0]);
    writeStudents(clazz[0]);
    
    printf("%s\n", (**clazz).id);
    printf("%s\n", clazz[0]->id);
    
    freeClass(clazz[0]);
    return 0;
}

void readStudents(CLASS_PTR p) {
    printf("id name <enter> q exit input\n");
    for(int i=0;i<p->members;i++) {
        //利用指针操作结构体对象成员 
        STUDENT_PTR st_ptr = &(p->students[i]);
        scanf("%s",st_ptr->id);
        if (tolower(*(st_ptr->id))== 'q') {
            *(st_ptr->id) = 0;
            return;
        }
        scanf("%s",st_ptr->name);
    }
}

void writeStudents(CLASS_PTR p){
    printf("Class %s members:\n", p->id);
    for(int i=0;i<p->members;i++) {
        STUDENT_PTR st_ptr = &(p->students[i]);
        if (*(st_ptr->id)) {
            printf("%10s%10s\n", st_ptr->id,st_ptr->name);
        } 
        else {
            break;
        }
    }
}

CLASS_PTR createClass(char *name, int cnt) {
    assert(name && cnt);
    
    CLASS_PTR cls = malloc(sizeof(C_Class));
    strcpy(cls->id, name);
    cls->members = cnt;
    cls->students = malloc(cnt * sizeof(Student));
    memset(cls->students, 0, cnt * sizeof(Student));
    return cls;
}

void freeClass(CLASS_PTR p) {
    assert(p);
    
    free(p->students);
    free(p);
}

