#include"w6-linknode.hpp"

UserData _LinkNode::getData() const {
    return item;
}

_LinkNode* _LinkNode::getNext() const {
    return next;
}

void _LinkNode::setNext(_LinkNode *next) {
    this->next = next;
}

void _LinkNode::setData(UserData item) {
    this->item = item;
}

_LinkNode* _LinkNode::insert(UserData item) {
    this->next = Push(this->next,item);
    return this->next;
}

_LinkNode* _LinkNode::erase() {
    this->next = Pop(this->next);
    return this->next;
}

_LinkNode* _LinkNode::Push(_LinkNode *head, UserData item) {
    auto new_head = new _LinkNode(item);
    new_head->setNext(head);
    return new_head;
}

_LinkNode* _LinkNode::Pop(_LinkNode *head) {
    if (head) {
        auto new_head = head->next;
        delete head;
        return new_head;
    }
    return nullptr;
}
