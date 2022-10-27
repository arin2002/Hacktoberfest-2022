# Write a function that takes in the head of a Singly Linked List, reverses the list in place (l.e., doesn't create a brand new list), and returns its new head.
# Each LinkedList node has an integer [value] as well as a [next] node pointing to the next node in the list or to None/Null ifIt's the tail of the list.
# You can assume that the input Linked List will always have at least one node; in other words, the head will never be None/null

# This is an input class. Do not edit.
class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


def reverseLinkedList(head):
    prev, current = None, head
    
    while current:
        nextNode = current.next
        current.next = prev
        prev, current = current, nextNode
    
    return prev