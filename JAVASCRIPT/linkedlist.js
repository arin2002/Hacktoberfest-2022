function Node(val) {
  this.val = val;
  this.next = null;
}

function linkedlist() {
  var head_pointer = null;
  var total_len = 0;

  return {
     InsertAtHead(val2)
    {
    
      if (!val2) return;

      var node = new Node(val2);

      if (head_pointer) {
        node.next = head_pointer;
      }

      head_pointer = node;
      total_len++;
    },
    
    DeleteAtVal(val) {
      var current_pointer = head_pointer;

      if (head_pointer.val === val) {
        head_pointer = head_pointer.next;
        return;
      }

      while (current_pointer) {
        if (current_pointer.next) {
          var next = current_pointer.next;

          if (next.val === val) {
            current_pointer.next = next.next;
            total_len--;
            break;
          }
        }

        current_pointer = current_pointer.next;
      }
    },
    get len() {
      return total_len;
    },
    
    PrintingLinkedList() {
      var final = [];

      var current_pointer = head_pointer;
      while (current_pointer) {
        final.push(current_pointer.val);

        current_pointer = current_pointer.next;
      }

      return final;
      
    }
  }
}













