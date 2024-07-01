class employee:
    raise_amaount=0.5
    def __init__(self,name,salary) -> None:
        self.name=name
        self.salary=salary
    def raise_salary(self):
        self.salary+=self.salary*employee.raise_amaount
    @classmethod
    def setup_raise_amount(cls,amount):
        cls.raise_amaount=amount
emp1=employee('albert',5000)
#raising albert salary
emp1.raise_salary()

class devloper(employee):
    pass

dev1=devloper("hero",40000)

print(dev1.__dict__)