# Write a function that takes in the head of a singly Linked List that contains a loop (in other words, the list's tail node points to some node
# In the list instead of None/null). The function should return the node (the actual node--not just its value) from which the loop originates in constant space.
# Each LinkedList node has an Integer value as well as a next node pointing to the next node in the list.
# This is an input class. Do not edit.
# 0 -> 1 -> 

class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


def findLoop(head):
	
    firstPoint , secondPoint = head, head
	
    while True:
        firstPoint = firstPoint.next
        secondPoint = secondPoint.next.next
        if firstPoint == secondPoint:
            break
			
    firstPoint = head
	
    while True:
        if firstPoint== secondPoint:
            return firstPoint
        firstPoint = firstPoint.next
        secondPoint = secondPoint.next