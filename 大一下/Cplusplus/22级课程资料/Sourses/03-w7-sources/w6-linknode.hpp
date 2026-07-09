#ifndef LINK_NODE_H
#define LINK_NODE_H

typedef int UserData;

class _LinkNode {
    public:
        _LinkNode() = delete;
        _LinkNode(UserData item): item(item) {};
        UserData getData() const;
        void setData(UserData item);
        _LinkNode* getNext() const;
        void setNext(_LinkNode *next);
    
        // append item after *this, return this->next
        _LinkNode* insert(UserData item);
        // delete item after *this, return this->next
        _LinkNode* erase();
        
        //new item before the *head, return new head
        static _LinkNode* Push(_LinkNode *head, UserData item);
        //delete *head, return head->next as new head
        static _LinkNode* Pop(_LinkNode *head);
    private:
        UserData item;
        _LinkNode *next;
        _LinkNode *prev;
};

#endif
