#include <iostream>
#include "menu.h"
using namespace std;

#define NEW(x) *(new x)
#define DEL(x) delete &x

int main() {
    Menu &root = NEW(Menu("Main menu"));
    root.addItem(NEW(FooMenuItem("Foo Item A")));
    root.addItem(NEW(FooMenuItem("Foo Item B")));
    root.addItem(NEW(FooMenuItem("Foo Item C")));
    AbstractMenu &sub = root.addItem(NEW(Menu("Sub Menu A")));
        Menu &subMenu = dynamic_cast<Menu &>(sub);
        subMenu.addItem(NEW(FooMenuItem("Sub Item A")));
        subMenu.addItem(NEW(FooMenuItem("Sub Item B")));
        subMenu.addItem(NEW(QuitMenuItem("Return to main")));
    root.addItem(NEW(QuitMenuItem("Quit")));
    
    root.execute();
    DEL(root);
    return 0;
}