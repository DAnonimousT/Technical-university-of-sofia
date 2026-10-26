package lab3;
import lab3.MyEmployee;

public abstract class Employee implements MyEmployee{
  double Salary;
  String Name;
  
  abstract double getSalary();
  abstract String getName();
  abstract void printInfo();
}
