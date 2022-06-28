from requests import head


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def nfromend(self, n):
        ptr1 = self.head
        ptr2 = self.head
        
        while(n):
            ptr2 = ptr2.next
            n-=1
            
        while (ptr2 ):
            print("Hi")
            ptr2 = ptr2.next
            ptr1 = ptr1.next
            
        print(ptr1.data)
            
            
            

llist = LinkedList()
llist.push(10)
llist.push(20)
llist.push(30)
#llist.printList()   
llist.nfromend(3)  
#llist.printList()    
                    