#include<iostream>
using namespace std;

template<typename T>class Node{
    private:
        T data;
        Node<T>* next;
        template<typename U>friend class LinkedList;
    public:
        Node(){
            this->next = NULL;
        }
};

template<typename T>class LinkedList{
    private:
        Node<T>* head;
    public:
        LinkedList(){
            this->head = NULL;
        }

        void add(T item){
            Node<T>* node = new Node<T>[1];
            node->data = item;
            if(head == NULL){
                head = node;
                head->next = node;
                cout<<"new node added(firstnode) !"<<endl;
                return;
            }
            Node<T>* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = node;
            node->next = head;
            cout<<"new node added at back!"<<endl;
        }

        void addFront(T item){
            Node<T>* node = new Node<T>[1];
            node->data = item;
            if(head == NULL){
                head = node;
                node->next = head;
                cout<<"new node added(firstnode) !"<<endl;
                return;
            }
            node->next = head;
            Node<T>*temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = node;
            head = node;
            cout<<"new node added at front !"<<endl;
        }

        void add(int index, T item){
            if(index > length() || index < 0){
                cout<<"index out of bound !"<<endl;
                return;
            }
            Node<T>* node = new Node<T>[1];
            node->data = item;
            int count = 0;
            Node<T>* temp = head;
            while(count < index){
                if(count == index-1){
                    node->next = temp->next != head ? temp->next : head;
                    temp->next = node;
                    cout<<"new node added at index "<<index<<" !"<<endl;
                    break;
                }
                count++;
                temp = temp->next;
            }
            
        }

        int length(){
            if(head == NULL) return 0;
            int len = 1;
            Node<int>* temp = head;
            while(temp->next != head){
                len++;
                temp = temp->next;
            }
            return len;
        }

        void displayAll(){
            if(head == NULL){
                cout<<"linked list is empty"<<endl;
                return;
            }
            cout<<endl<<"----link list items------"<<endl;
            Node<T>* temp = head;
            while(true){
                cout<<temp->data<<" | ";
                temp = temp->next;
                if(temp == head) break;
            }
            cout<<endl<<"--------------------------"<<endl;
        }

        void remove(){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return;
            }

            if(length() == 1){
                removeFront();
                return;
            }

            Node<T>* temp = head;
            while(temp->next != head){
                if(temp->next->next == head){
                    temp->next = head;
                    cout<<"last item removed"<<endl;
                    break;
                }
                temp = temp->next;
            }
            
        }

        void remove(int index){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return;
            }
            if(index >= length() || index < 0){
                cout<<"index out of bound !"<<endl;
                return;
            }
            if(index == 0){
                removeFront();
                return;
            }
            int count = 0;
            Node<T>* temp = head;
            while(temp->next != head){
                if(count == index - 1){
                    temp->next = temp->next->next;
                    cout<<"item removed at index "<<index<<endl;
                    break;
                }
                count++;
                temp = temp->next;
            }
        }

        void removeFront(){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return;
            }
            if(length() == 1){
                head = NULL;
                cout<<"first item removed"<<endl;
                return;
            }
            Node<T>* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            head = head->next;
            temp->next = head;
            cout<<"front item removed"<<endl;
        }

        T get(int index){
            if(head == NULL){
                cout<<"linked list is empty !"<<endl;
                return -9999;
            }
            if(index >= length() || index < 0){
                cout<<"index out of bound !"<<endl;
                return -9999;
            }
            if(index == 0){
                return head->data;
            }
            int count = 0;
            T res;
            Node<T>* temp = head;
            while(true){
                if(count++ == index){
                    res = temp->data;
                    break;
                }
                temp = temp->next;
                if(temp == head) break;
            }
            return res;
        }

};

int main(){
    LinkedList<int> list;
    int ch, item, index;
    bool quit = false;
    do{
        cout<<"===================================="<<endl;
        cout<<"select option :"<<endl;
        cout<<"1: insert back"<<endl;
        cout<<"2: insert front"<<endl;
        cout<<"3: insert at index"<<endl;
        cout<<"4: display items"<<endl;
        cout<<"5: get item at index"<<endl;
        cout<<"6: delete back"<<endl;
        cout<<"7: delete front"<<endl;
        cout<<"8: delete at index"<<endl;
        cout<<"9: exit"<<endl;
        cin>>ch;
        cout<<"===================================="<<endl;
        switch (ch)
        {
        case 1:
            cout<<"enter item to insert:"<<endl;
            cin>>item;
            list.add(item);
            break;
        case 2:
            cout<<"enter item to insert:"<<endl;
            cin>>item;
            list.addFront(item);
            break;
        case 3:
            cout<<"enter item to insert:"<<endl;
            cin>>item;
            cout<<"enter index:"<<endl;
            cin>>index;
            list.add(index, item);
            break;
        case 4:
            list.displayAll();
            break;
            
        case 5:
            cout<<"enter index:"<<endl;
            cin>>index;
            cout<<"item at index "<<index<<": "<<list.get(index)<<endl;
            break;
        case 6:
            list.remove();
            break;
        case 7:
            list.removeFront();
            break;
        case 8:
            cout<<"enter index:"<<endl;
            cin>>index;
            list.remove(index);
            break;
        case 9:
            quit = true;
            break;
        default:
            cout<<"invalid selection"<<endl;
            break;
        }
    }while(!quit);
    return 0;
}