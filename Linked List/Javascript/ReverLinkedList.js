const { LinkedList } = require('./LinkedList')
const linkedList = new LinkedList();

// Adding sample data to the linked list
linkedList.append(1);
linkedList.append(2);
linkedList.append(3);

const ReverseLinkedList = (head) => {
  let currentNode = head;
  let previousNode = null;

  while(currentNode !== null) {
    let nextNode = currentNode.next;
    currentNode.next = previousNode;
    previousNode = currentNode;
    currentNode = nextNode;
  }
  
  return previousNode;
}

ReverseLinkedList(linkedList.head);

