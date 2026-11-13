package sem3;

public abstract class PaymentMethod{
  public void pay(double money){
    if(money > 0){
      System.out.println("The amount is greater than 0");
      processPayment(money);
    }
    else{
      System.out.println("The amount is 0");
    }
  }
  public abstract void processPayment(double money);
}
