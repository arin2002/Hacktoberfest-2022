class Node:
    def __init__(self, data, nxt=None) -> None:
        self.data = data
        self.next = nxt


class LinkedList:

    def __init__(self) -> None:
        self.head = None

    def add_node(self, node):
        node.next = self.head
        self.head = node

    def print_list(self):
        tmp = self.head
        while tmp:
            print("{}->".format(tmp.data), end="")
            tmp = tmp.next
        print(tmp)


class MergeSort:
    # Function to sort the given linked list using Merge Sort.
    def getmid(self, head):
        slow = head
        fast = head
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next

        return slow

    def merge(self, a, b):
        dummy = Node(0)
        tail = dummy

        while True:
            if a is None:
                tail.next = b
                break
            if b is None:
                tail.next = a
                break

            if a.data <= b.data:
                tail.next = a
                a = a.next
            else:
                tail.next = b
                b = b.next

            tail = tail.next

        return dummy.next

    def mergeSort(self, head):
        if head is None or head.next is None:
            return head

        # get middle ele and create two lists
        mid = self.getmid(head)
        midnext = mid.next
        mid.next = None

        # mergeSort the left list
        left = self.mergeSort(head)
        # mergeSort the right list
        right = self.mergeSort(midnext)

        # create a new merged list of the above 2 and return the pointer to new list
        sortedlist = self.merge(left, right)
        return sortedlist


n = int(input("Enter the size of linked list: "))
ll = LinkedList()
for i in range(n):
    node = Node(int(input()))
    ll.add_node(node)

print("Entered List:")
ll.print_list()
ms = MergeSort()
ll.head = ms.mergeSort(ll.head)
print("Sorted List:")
ll.print_list()
