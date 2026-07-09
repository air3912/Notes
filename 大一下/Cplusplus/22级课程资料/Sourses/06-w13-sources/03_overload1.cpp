#include <iostream>

class Apple{ /*可以随意填入成员*/ };
class Banana{ /*可以随意填入成员*/ };
class Cherry{ /*可以随意填入成员*/ };

void say(Apple fruit) { 
    printf("I'm an apple!\n"); 
}
void say(Banana fruit){ 
    printf("I'm a banana!\n"); 
}
void say(Cherry fruit){ 
    printf("I'm a cherry!\n"); 
}

int main(){
    Apple a;
    Banana b;
    Cherry c;
    say(a);
    say(b);
    say(c);
}
