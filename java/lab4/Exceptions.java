package lab4;

import java.lang.classfile.CodeBuilder.CatchBuilder;
import java.util.*;


public class Exceptions{
  public void main(String[] args){
    Scanner scanner = new Scanner(System.in);
        
    int choice;

    do {
      System.out.println("\n=== BOOK STACK MANU ===");
      System.out.println("1. Add book");
      System.out.println("3. Search books by minimum price");
      System.out.println("0. Exit");
      System.out.println("Choose an option: ");

      choice = Integer.parseInt(scanner.nextLine());

      switch (choice) {
        case 1:

          try{
          System.out.print("Book title: ");
          String title = scanner.nextLine();

          System.out.println("Book author: ");
          String author = scanner.nextLine();

          System.out.println("Book price: ");
          double price = Double.parseDouble(scanner.nextLine());
          System.out.println(title + author + Double.toString(price));
          }
        catch(NumberFormatException e){
          System.out.println("Have to be string!");
        }
        break;
        case 3:
          try{
            System.out.println(getMinPrice()); 
          }
        catch(IdiotSi e){
          System.out.println(e.getMessage());
        }
        break;
        case 0:
          System.out.println("Goodbye!");
          break;
        default:
          System.out.println("Invalid option!");
          break;
      }
    } while (choice != 0);
    scanner.close();
  }
  private static int getMinPrice() throws IdiotSi{
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Book min price: ");
    int minPrice = scanner.nextInt();
    if(minPrice != 0){
      throw new IdiotSi();
    }
    return minPrice;
  }
}
