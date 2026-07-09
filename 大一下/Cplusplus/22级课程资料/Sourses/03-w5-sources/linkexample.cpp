#include<iostream>
#include"linknode.hpp"

int main() {
    LinkNode *head = NULL;
    head = head->Push(head,3);
    head = LinkNode::Push(head,7);
    head = LinkNode::Push(head,25);
    head = LinkNode::Push(head,4);

    auto temp = head;
    while (temp != NULL) {
        std::cout << temp->getData() << std::endl;
        temp = temp->getNext();
    }
    return 0;
}
