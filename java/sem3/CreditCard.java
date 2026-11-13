package sem3;

import sem3.PaymentMethod;

public class CreditCard extends PaymentMethod{
  
  @Override 
  public void processPayment(double money){
    System.out.println("Processing payment with card amount:" + money);
  }
}
