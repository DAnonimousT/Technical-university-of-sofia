package lab3;
import lab3.Employee; 

public class Admin extends Employee{
  String Name;
  double Salary;

  public Admin(String name, double salary){
    this.Name = name;
    this.Salary = salary;
  }

  @Override 
  public String getName(){
    return this.Name;
  }

  @Override 
  public double getSalary(){
    return this.Salary;
  }
}
