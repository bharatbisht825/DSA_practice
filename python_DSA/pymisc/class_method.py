class employee:
    #class methods is used to change the value of class variables
    raise_amount=0.5
    def __init__(self,name,salary) -> None:
        self.name=name
        self.salary=salary

    def raise_salary(self):
        self.salary+=self.salary*employee.raise_amount

    @classmethod
    def set_raise_amount(cls,amount): #this will take class as input and output the 
        cls.raise_amount=amount

    @classmethod
    def input_data_from_string(cls,input_data):
        name,salary=str(input_data).split('-')
        return cls(name,salary)

    @staticmethod      #static methods are those methods which dont take class or instance as an argument
    def workday(day):
        if day.weekday()==6 or day.weekday()==7:
            return True
        else:
            return False
import datetime
mydate=datetime.date(2016,7,15)
print(employee.workday(mydate))

emp1=employee("gupta",5000)
print("this is the amount intially",emp1.salary)
emp1.raise_salary()
print("this is the amount after raise",str(emp1.salary))
employee.set_raise_amount(0.8)
emp1.raise_salary()
print("this is the amount after raising the amount",str(emp1.salary))


st="aman-4000"
emp2=employee.input_data_from_string(st)
print(emp2.salary)






    