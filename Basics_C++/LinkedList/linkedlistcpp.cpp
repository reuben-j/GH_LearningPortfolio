#include <iostream>

using namespace std;

struct Node { // define a structure of node type
        int dataNum; // data stored
        Node* next; // node pointer that points to next member in list
};

class linkedlist {
    private:
        Node* head; // Pointer to the first node of the list. If list empty, head will be nullptr
    public:
        linkedlist() :// constructor of the linkedlist class, called when linkedlist object created
        head(nullptr) {} //allocated head of list to nullptr on construction
        
        //destructor can be identified by the ~ symbol
        ~linkedlist() { // this is called when a list member is deleted or goes out of scope
            Node* current = head; // starts by finding top of list at head
            Node* next; // declares value for what will be used for next in list
            while (current != nullptr) { // checks if the current has a value or if is nullptr
                next = current->next; // allocates next pointer
                delete current; // deletes data from current
                current = next; // moves to next member in list
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