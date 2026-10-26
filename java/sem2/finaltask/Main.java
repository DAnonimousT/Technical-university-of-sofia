package finaltask;
import java.util.Arrays;
import java.util.Scanner;
import java.util.*;

public class Main{
  public void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    BookStack stack = new BookStack(2);
    
    
    int choice;

    do {
      System.out.println("\n=== BOOK STACK MANU ===");
      System.out.println("1. Add book");
      System.out.println("2. Remove book");
      System.out.println("3. Search books by minimum price");
      System.out.println("4. Print stack information");
      System.out.println("0. Exit");
      System.out.println("Choose an option: ");

      choice = Integer.parseInt(scanner.nextLine());

      switch (choice) {
        case 1:
          System.out.print("Book title: ");
          String title = scanner.nextLine();

          System.out.println("Book author: ");
          String author = scanner.nextLine();

          System.out.println("Book price: ");
          double price = Double.parseDouble(scanner.nextLine());

          Book book = new Book(title, author, price);
          stack.push(book);
    
          break;
        case 2:

          stack.pop();
        
          break;
        case 3:

          System.out.print("Enter minimum Price: ");
          double minPrice = Double.parseDouble(scanner.nextLine());
          stack.searchByPrice(minPrice);

          break;
        case 4:
          stack.printStackInformation();
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
}
