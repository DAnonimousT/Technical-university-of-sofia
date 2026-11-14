package sem3;

import java.util.*;

import sem3.CreditCard;
import sem3.PayPal;
import sem3.PaymentMethod;

public class Main{
  public void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int choose;
    do{
      System.out.println("""
          Choose payment:
        0. Exit
        1. CredidCard
        2. PayPal
      """);
      choose = Integer.parseInt(scanner.nextLine());
      double money;
      System.out.println("The amount of money: ");
      switch(choose){
        case 2:
          money = Double.parseDouble(scanner.nextLine());
          PaymentMethod payPal = new PayPal();
          payPal.pay(money);
        break;
        case 1:
          money = Double.parseDouble(scanner.nextLine());
          PaymentMethod card = new CreditCard();
          card.pay(money);
        break;
      }
    }
    while(choose != 0);
  }
}
