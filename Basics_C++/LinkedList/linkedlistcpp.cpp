#include <iostream>

using namespace std;

struct Node {
        int dataNum;
        Node* next;
};

class linkedlist {
    private:
        Node* head;
    public:
        linkedlist() : head(nullptr) {}

        ~linkedlist() {
            Node* current = head;
            Node* next;
            while (current != nullptr) {
                next = current->next;
                delete current;
                current = next;
            }
        }

    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->dataNum = value;
        newNode->next = head;
        head=newNode;
    }

    void displayList() const {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->dataNum << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
   
    linkedlist list;
    list.insertAtBeginning(123);
    list.insertAtBeginning(31);

    list.displayList();
    

    return 0;
}