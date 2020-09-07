#include "iostream"
#include "singly.hpp"

SinglyLinklist::SinglyLinklist() {
    head = tail = NULL;
}
SinglyLinklist::SinglyLinklist(int data) {
    init(data);
    node->data = data;
    head = tail = node;
    node->next = NULL;
}

void SinglyLinklist::init(int data) {
    node = new Node;
    node->data = data;
    node->next = NULL;
}

bool SinglyLinklist::isEmpty() {
    if (!head) return true;
    return false;
}
void SinglyLinklist::display() {
    std::cout << "Your Singly Linklist is:" << std::endl;
    temp = head;
    if (isEmpty()) {                //no any node
        std::cout << "Empty node" << std::endl;
        return;
    }

    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void SinglyLinklist::add(int data) {
    Node* n = new Node;
    n->next = NULL;
    n->data = data;
    if (isEmpty()) {
        init(data);
        head = tail = node;
        return;
    }
    tail->next = n;
    tail = tail->next;
}

void SinglyLinklist::clean() {
    Node* temp = NULL;
    if (isEmpty()) {
        std::cout << "Create Linklist first" << std::endl;
        return;
    }
    temp = head;
    while (temp) {
        std::cout << "Removing node having data: " << temp->data << std::endl;
        temp = temp->next;
        delete head;
        head = temp;
    }
}

// void SinglyLinklist::add(int place, int data) {
//     int count;
//     Node* n = new Node;
//     if (isEmpty()) {
//         std::cout << "Since linklist is empty creating linklist :D" << std::endl;
//         init(data);
//         head = tail = node;
//         return;
//     }
// }

// int SinglyLinklist::count() {
//     int count = 0;
//     if (isEmpty()) {
//         return 0;
//     }
//     Node* temp = head;
//     while (temp) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }
