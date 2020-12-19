#include <iostream>

/* The program demonstrates a basic linked list implemented using classes */

using namespace std;

class Node
{
public:
        int data;
        Node *next = NULL;
};

class LinkedList
{
public:
        Node *head = NULL;
        Node *tail = NULL;
};

void addNode(LinkedList* list, Node* node)
{
        if(list->head == NULL && list->tail == NULL) { // For the first node only
                list->tail = node;
                list->head = node;
        }
        else {
                list->tail->next = node;
                list->tail = node;
        }
}

void display(LinkedList* list)
{
        Node *ptr = list->head;

        while (ptr != NULL) { // Loop to traverse the list
                cout << ptr->data << "  ";
                ptr = ptr->next;
        }
}

void search(LinkedList* list, int value)
{
        Node *ptr = list->head;

        while(ptr != NULL) {
                if(value == ptr->data) {
                        cout << "Value exists in the list" << endl;
                        break;
                }
                ptr = ptr->next;
        }
        if(ptr == NULL)
                cout << "Value does not exist in the list" << endl;
}

int main()
{
        LinkedList example_list;

        int arr[] = {5, 8, -2, 66, 78, 21, 90, 0, 2};

        for(int i = 0; i < 9; i++) {
                Node *temp_node = new Node();
                temp_node->data = arr[i];
                addNode(&example_list, temp_node);
        }

        search(&example_list, 78);
        search(&example_list, 9);

        display(&example_list);
        
        return 0;
}