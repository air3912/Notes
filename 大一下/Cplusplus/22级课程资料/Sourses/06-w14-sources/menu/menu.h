#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>
#include <typeinfo> 
using namespace std;

class AbstractMenu {
    public:
        virtual void execute() = 0;
        virtual ~ AbstractMenu() {};
        AbstractMenu(const string title, char shortcut = 0):
            title(title),shortcut(shortcut) {}; 
        string& getTitle() {return title;};
    protected:
        string title;
        char shortcut;
};

class MenuItem: public AbstractMenu {
    public:
        void execute() {};
        MenuItem(const string title, char shortcut = 0):
            AbstractMenu(title,shortcut) {}; 
};

class QuitMenuItem:public MenuItem {
    public:
        QuitMenuItem(const string title, char shortcut = 'q'):
            MenuItem(title,shortcut) {};
};   

class FooMenuItem:public MenuItem {
    public:
        void execute() {cout << title << "\tDone!" << endl;};
        FooMenuItem(const string title, char shortcut = 0):
            MenuItem(title,shortcut) {};
}; 

class Menu: public AbstractMenu {
    private:
        void _displayTitle(){cout << endl << title << endl << endl;};
        void _displayItemList(){
            for (int i=0;i<itemCounter;i++) {
                cout << i << ". " << items[i]->getTitle() << endl;
            }
        };
    public:
        void execute() {
            while (true) {
                _displayTitle();
                _displayItemList();
                int selected;
                cout << endl << "Select menu num:";
                cin >> selected;
                //Todo: BUG
                AbstractMenu *selectedItem = items[selected]; 
                if (typeid(QuitMenuItem)==typeid(*selectedItem)) break;
                selectedItem->execute();
            }
        };
        Menu(const string title, char shortcut = 0, int maxitems = 10):
            AbstractMenu(title,shortcut) {
                items = new AbstractMenu *[maxitems];
                itemCounter = 0;
                parent = NULL;
            };
        ~ Menu() {
            //Todo: BUG
            delete items;
            cout << "Items left in memory" << endl;
        }; 
        AbstractMenu& addItem(AbstractMenu &item) {
            items[itemCounter++] = &item;
            try {
                Menu &menu = dynamic_cast<Menu &>(item);
                menu.parent = this;
            } catch (bad_cast) {};
            return item;
        };
    private:
        AbstractMenu **items;
        int itemCounter;
        Menu* parent;    
};


#endif

