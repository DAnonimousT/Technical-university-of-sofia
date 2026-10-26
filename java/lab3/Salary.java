package lab3;
import lab3.Employee;

public class Salary extends Employee{
  double Salary;
  public Salary(double salary){
    this.Salary = salary; 
  }

  @Override 
  public void printInfo(){
    System.out.println(this.Salary);
  }
}
