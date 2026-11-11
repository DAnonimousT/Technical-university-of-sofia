package lab5;

import java.util.*;
import lab5.TextEditor;

public class Main{
  public void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String mainText = "";
    ArrayList<String> text = new ArrayList<>();
    TextEditor edit = new TextEditor();

    int choice;

    do {
      System.out.println("\n=== STRING MANU ===");
      System.out.println("1. Enter a string");
      System.out.println("2. Change a word in the string");
      System.out.println("3. Invert ");
      System.out.println("4. Regex");
      System.out.println("Choose an option: ");

      choice = Integer.parseInt(scanner.nextLine());

      switch (choice) {
        case 1:
        text.addAll(Arrays.asList(scanner.nextLine().split("\\s+")));
        break;
        case 2:
          String wordToChange = scanner.nextLine();
          System.out.println("New Word:");
          String newWord = scanner.nextLine();

          edit.changeAWord(text, wordToChange, newWord);
          System.out.println(String.join(" ", text));
        break;
        case 3:
          edit.invert(text);
          System.out.print(String.join(" ", text));
        break;
        case 0:
          System.out.println("Goodbye!");
          break;
        case 4:
          edit.regex(text);
          break;
        default:
          System.out.println("Invalid option!");
          break;
      }
    } while (choice != 0);
    scanner.close();
  }
}
