

class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None
        
    
class LinkedList:
    
    def __init__(self) -> None:
        self.head = None
        
    def reverse(self):
        prev = None
        current = self.head
        while(current is not None):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def printList(self):
        print("Sself.head")
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next

llist = LinkedList()
llist.push(10)
llist.push(20)
llist.push(30)
llist.printList()   
llist.reverse()  
llist.printList()    
        