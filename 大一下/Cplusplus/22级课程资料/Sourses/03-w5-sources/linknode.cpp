#include"linknode.hpp"

UserData LinkNode::getData() const {
    return item;
}

LinkNode* LinkNode::getNext() const {
    return next;
}

void LinkNode::setNext(LinkNode *next) {
    this->next = next;
}

LinkNode* LinkNode::Push(LinkNode *head, UserData item) {
    auto temp = head;
    head = new LinkNode(item);
    head->setNext(temp);
    return head;
}
