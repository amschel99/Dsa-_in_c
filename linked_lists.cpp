#include <iostream>

using namespace std;
/*the code below creates a user defined type called Node which has an integer value and a pointer to Node*/
class Node
{
public:
    int value;
    Node *next;
};
void print_list(Node *n)
{

    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}
int main()
{
    /*  the code below creates a pointer to the first element*/
    Node *head = new Node();
    /*the new keyword above acts like malloc in c, it allocates memory and returns a pointer to the empty allocated memory. The pointer  is of type Node*/
    Node *second = new Node();
    Node *third = new Node();
    head->value = 1;     /*we give the head element a value*/
    head->next = second; /*the next property links to the second node*/

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;
    print_list(head);
    return 0;
}