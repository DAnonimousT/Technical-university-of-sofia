package sem3;

import java.util.*;

import sem3.CreditCard;
import sem3.PayPal;
import sem3.PaymentMethod;

public class Main{
  public void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int choose;
      System.out.println("""
          Choose payment:
        1. CredidCard 
        2. PayPal
      """);
    while((choose = Integer.parseInt(scanner.nextLine())) != 0){
      double money;
      switch(choose){
        case 2:
          money = scanner.nextDouble();
          PaymentMethod payPal = new PayPal();
          payPal.processPayment(money);
        break;
        case 1:
          money = scanner.nextDouble();
          PaymentMethod card = new CreditCard();
          card.processPayment(money);
        break;
      }
    }
  }
}
