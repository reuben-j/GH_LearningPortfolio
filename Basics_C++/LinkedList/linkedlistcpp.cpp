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

    void insertAtBeginning(int value) { // this method of adding to list simply creates new node, allocates data, makes a ptr to previous head then the head pointer is allocated to this new node
        Node* newNode = new Node(); // creation of new node named newNode
        newNode->dataNum = value; // value is attained from whatever is passed to function
        newNode->next = head; // allocates the next pointer to the pre-existing head value
        head=newNode; //allocates value of head to newly declared value
    }

    void insertAtEndOfList(int value) { // this method adds new member to end of list
        Node* newNode = new Node(); // create new node 
        newNode->dataNum = value; // allocate data according to what is passed to function
        newNode->next=nullptr; // allocate next ptr to nullptr as this will be last member in list

        if(head == nullptr) { // if list is empty, make this head node
            head = newNode;
        }
        //the below will always be run regardless if list is empty or not
        Node* temp = head; // create temp node
        while(temp->next != nullptr) { // loop through list members and see if their next ptr is null or not
            temp = temp->next; // if it is not null, continue to loop
        } // once a next ptr with value null is found, the last temp will be the current last member of the list
        temp->next = newNode; // allocates the next ptr of the previously found last member of list to the newly created node
    }

    void deleteNodeByValue(int value) { //this function will delete list member of chosen value
        if(head == nullptr) return; // if list empty, return 

        if(head->dataNum == value) { //check if head of list is the value
            Node* temp = head; // create temp Node copy of head
            head = head->next; // allocate value of head as value of next
            delete temp; // delete last stored copy of head
            return; // return as successful
        }

        Node* current = head; // create new Node with data of head
        Node* previous = nullptr; // create Node previous with nullptr value to be used next
        while(current != nullptr && current->dataNum != value) { // while current member has a value and the value is not the one being searched for
            previous = current; //allocated previous to current
            current = current->next; // allocated current to next
        } //this loop is to essentially search for the specified value and stop loop on that member of list

        if(current == nullptr) { // if the loop finishes and value is not found
            cout << "Value {" << value << "} to be deleted not found!\n"; 
            return;
        }
        previous->next = current->next; //considering the value is found, allocate previous Node next ptr to current next ptr, essentially removing ptr reference of target value
        delete current; // delete node of target value
       
    }

    void displayList() const { //member function that will display members of linked list
    // use of the const keyword above means there will be no alterations to the list itself
        Node* temp = head; //creates a temporary pointer of type *Node that points to head of list
        while (temp != nullptr) { // loop through temp while value is not null
            cout << temp->dataNum << " -> "; // print data from current node and use -> spacer
            temp = temp->next; // allocate temp to next node in list
        }
        cout << "nullptr" << endl; //visualise end of list
    }
};

int main() {
   
    linkedlist list;
    list.insertAtBeginning(123);
    list.insertAtBeginning(31);
    list.insertAtEndOfList(3123);

    list.displayList();

    list.deleteNodeByValue(31);

    list.displayList();


    return 0;
}