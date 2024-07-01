class employee:
    def __init__(self,name,surname,salary) -> None:
        self.name=name
        self.surname=surname
        self.salary=salary
    def fullname(self):
        return (self.name+" "+self.surname)
    
emp1=employee("rahul","gupta",454554)
print(emp1.name)
print(emp1.fullname())
        