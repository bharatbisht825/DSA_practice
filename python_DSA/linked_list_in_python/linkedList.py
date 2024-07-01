class node:
    counter=0
    def __init__(self,data) -> None:
        self.data=data
        self.next=None
        node.counter+=1


class linkedlist:
    def __init__(self) -> None:
        self.head=None


    def insertatend(self,data):
        newnode=node(data)
        if(self.head==None):
            self.head=newnode
        else:
            currrent=self.head
            while(currrent.next!=None):
                currrent=currrent.next
            currrent.next=newnode




    def insertatbegining(self,data):
        newnode=node(data)
        if(self.head==None):
            self.head=newnode
        else:
            newnode.next=self.head
            self.head=newnode
    




    def insertatPositionBefore(self,data,position):
        current=self.head
        if(position>node.counter):
            print("overflow")
            return
        if(position==1):
            self.insertatbegining(data)
        else:
            newnode=node(data)
            for i in range(1,position-1):
                current=current.next
            newnode.next=current.next
            current.next=newnode
    



    def insertAtAfter(self,data,position):
        newnode=node(data)
        if(position>node.counter):
            print("overflow")
        else:
            current=self.head
            for i in range(1,position):
                current=current.next
            newnode.next=current.next
            current.next=newnode
        
            
        
    def deleteAtPos(self,position):
        if(position>node.counter):
            print("overflow")
        if(position==1):
            self.head=self.head.next
            node.counter-=1
        else:
            current=self.head
            for i in range(1,position-1):
                current=current.next
            current.next=(current.next).next
            node.counter-=1



    def printnode(self):
        current=self.head
        while(current!=None):
            print(current.data,"->",end=" ")
            current=current.next
        print(node.counter)



linked=linkedlist()

linked.insertatend(65)
linked.insertatend(54)
linked.insertatbegining(89)
linked.printnode()
linked.insertatPositionBefore(100,4)
linked.printnode()
linked.insertAtAfter(26,2)
linked.printnode()
linked.deleteAtPos(3)
linked.printnode()

