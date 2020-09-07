#if !defined(__SINGLYLINKLIST__)
#define __SINGLYLINKLIST__

class Node {
public:
    int data;
    Node* next;
};

class SinglyLinklist {
private:
    Node* node;
    Node* head;
    Node* tail;
    Node* temp;
public:
    SinglyLinklist();
    SinglyLinklist(int data);
    void init(int data);
    void display();
    void add(int data);
    void clean();
    void add(int place, int data);
    int count();
    bool isEmpty();
};

#endif // __SINGLYLINKLIST__
