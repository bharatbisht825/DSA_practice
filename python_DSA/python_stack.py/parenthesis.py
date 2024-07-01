class node:
    counter=0
    def __init__(self,data) -> None:
        self.data=data
        self.next=None
        node.counter+=1
class stack:
    def __init__(self) -> None:
        self.start=None
        self.top=None

    def delete(self):
        if(node.counter==0):
            print("nothing to delete")
            return
        if self.start == self.top:
            self.start = None
            self.top = None
        else:
            current=self.start
            while(current.next!=self.top):
                current=current.next
            self.top=current
            self.top.next=None
            node.counter-=1

    def chechParenthesis(self):
        

        if(node.counter<2):
            return
        else:
            current=self.start
            while(current.next!=self.top):
                current=current.next
            pair = {')': '(', '}': '{', ']': '[','(': ')', '{': '}', '[': ']'}
            if current.data == pair.get(self.top.data):
                self.delete()
                self.delete()
            
    def insert(self,data):
        newnode=node(data)
        if(self.top==None):
            self.start=newnode
            self.top=newnode
        else:
            self.top.next=newnode
            self.top=newnode
        self.chechParenthesis()
    
    


    def display(self):
        if node.counter == 0:
         print("Nothing to print")
         return
        else:
         current = self.start
         while current:
            print(current.data, "->", end=" ")
            current = current.next
        print(node.counter)
    
    

st=stack()
exp = [()]{}{[()()]()}
for i in exp:
        st.insert("i")

st.display()

