//NAME: YUGAL GARG
//@Yugalgarg2002

#include <iostream>

struct node
{
    int data;
    node *next;
};

int length_ll(node *temp)
{

    if (temp == NULL)
    {
        return 0;
    }
    int count = 1;
    while (temp->next != 0)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

node *insert_node(node *head, int i, int value)
{
    if (i >= 0 && i <= length_ll(head))
    {
        if (i == 0)
        {
            node *new_node = new node; // Creating a node in the heap pointed by new_node which is in stack
            new_node->data = value;    // Storing the value in the data member of the node pointed by the new_node
            new_node->next = head;     // Changing the address of the pointer data member of the node equal to head

            head = new_node;

            return head;
        }
        else if (i == length_ll(head))
        {
            node *new_node = new node;
            new_node->data = value;
            new_node->next = NULL;
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;

            return head;
        }
        else
        {
            node *new_node = new node;
            new_node->data = value;

            node *temp = head;
            for (int j = 1; j < i; j++)
            {
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;

            return head;
        }
    }

    std::cout << " Index for insertion is not correct!!" << std::endl;
    return head;
}

void display_ll(node *head)
{
    if (head == NULL)
    {
        std::cout << " List is Empty !" << std::endl;
    }
    else
    {
        do
        {
            std::cout << head->data << " -> ";
            head = head->next;
        } while (head != NULL);

        std::cout << "END" << std::endl;
    }

    return;
}

int main()
{
    node *head = NULL;

    while (true)
    {
        std::cout << "Enter the index: ";
        int index;
        std::cin >> index;
        std::cout << "Enter the value to insert: ";
        int value;
        std::cin >> value;

        head = insert_node(head, index, value);
        std::cout << " 1= Continue || 0=End" << std::endl;
        int x;
        std::cin >> x;
        if (x == 0)
            break;
    }

    display_ll(head);
}
