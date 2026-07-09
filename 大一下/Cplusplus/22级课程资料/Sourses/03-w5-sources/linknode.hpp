#ifndef LINK_NODE_H
#define LINK_NODE_H
//你的代码写在这里
typedef int UserData;

class LinkNode {
    public:
        LinkNode() = default;
        LinkNode(UserData item): item(item) {};
        UserData getData() const;
        LinkNode* getNext() const;
        void setNext(LinkNode *next);
        
        static LinkNode* Push(LinkNode *head, UserData item);
    private:
        UserData item;
        LinkNode *next;
};

#endif
