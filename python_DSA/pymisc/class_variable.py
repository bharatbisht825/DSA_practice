# shared among all variable(static)
class employee:
    raise_amount=0.5  # the class variable
    def __init__(self,name,salary) -> None:
        self.name=name
        self.salary=salary
    def raise_salary(self):
        self.salary+=self.salary*employee.raise_amount
        
emp1=employee("rahul",50000)
print(emp1.name)
emp1.raise_salary()
print(emp1.salary)
