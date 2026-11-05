#include <iostream> 

using namespace std;

//Declare node 
struct Node{
    int num; // Data field to store a number
    Node *next; // Pointer to the next node
};

//Starting (Head) node
struct Node *head=NULL; // Initializing the head node as NULL initially

//Insert node at start
void insert_Node(int n){
    struct Node *new_node=new Node; // Creating a new node
    new_node->num=n; // Assigning data to the new node
    new_node->next=head; // Pointing the new node to the current head
    head=new_node; // Making the new node as the head
}

// Function to count the number of nodes in the linked list
int count_Nodes() {
    // Create a temporary node (tmp) pointing to the head.
    Node* tmp = head;

    // Count the nodes by creating a variable.
    int ctr = 0;

    // Loop through the linked list until the temp node is not null.
    // Increase ctr by 1 for each node and move on to the next node.
    while(tmp != NULL) {
        ctr++;
        tmp = tmp->next;
    }

    // Return the count of nodes (ctr).
    return ctr;  
} 

//Display all nodes
void display_all_nodes() {
    struct Node *temp = head; // Temporary node to traverse the list
    while(temp != NULL) { // Loop to iterate through the list
        cout << temp->num << " "; // Displaying the data in the current node
        temp = temp->next; // Moving to the next node
    }
}

int main(){
    insert_Node(1); // Inserting a node with value 1
    insert_Node(3); // Inserting a node with value 3
    insert_Node(5); // Inserting a node with value 5
    insert_Node(7); // Inserting a node with value 7
    insert_Node(9); // Inserting a node with value 9
    insert_Node(11); // Inserting a node with value 11
    insert_Node(13); // Inserting a node with value 13

    cout << "Original Linked list:\n";
	display_all_nodes(); // Displaying all nodes in the original list

	cout << "\nNumber of nodes in the said Linked list:\n";
    int ctr = count_Nodes(); // Counting the number of nodes in the list
    cout << ctr; // Displaying the count of nodes
    cout << endl; // Displaying newline

    return 0; 
}

