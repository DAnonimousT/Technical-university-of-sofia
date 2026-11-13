package lab6;

import java.util.*;

import lab6.TextEditor;

import java.io.*;
import java.lang.AutoCloseable;

public class Main{
  public void main(String[] args) throws IOException {
    Scanner scanner = new Scanner(System.in);
    ArrayList<String> text = new ArrayList<>();
    TextEditor edit = new TextEditor();
    
    File f = new File("file.txt");

    if(f.exists()){
      System.out.println("Exist");
    }
    else {
      System.out.println("Does not Exist");
      f.createNewFile();
    }

    try(BufferedReader br = new BufferedReader(new FileReader("file.txt"))){
      String words;
      while((words = br.readLine()) != null){
        text.addAll(Arrays.asList(words.split(" ")));
      }
    } 
    catch (IOException ex){
      ex.printStackTrace();
    }
    
    int choice;

    do {
      System.out.println("""
                        === STRING MANU ===
                        1. Enter a string
                        2. Change a word in the string
                        3. Invert
                        4. Get the emails
                        5. Save file
                        0. Exit
                        Choose an option:
                        """);
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
          ArrayList<String> emails = new ArrayList<>();
          emails = edit.regex(text);
          File b = new File("emails.bin");
          
          if(b.exists()){
            System.out.println("File exists");
          }
          else{
            System.out.println("Does not exists");
            b.createNewFile();
          }
          try(OutputStream outputStream = new ObjectOutputStream(new FileOutputStream("emails.bin"))){
            for(int i = 0; i < emails.size(); i++){
              outputStream.write(emails.get(i).getBytes());
            }
          }
        break;
        case 5:
          try(BufferedWriter bw = new BufferedWriter(new FileWriter("file.txt"))){
            bw.write(text.toString().replace("[", " ").replace("]", " ").replace(",", " "));
            bw.flush();
        }
        catch (IOException ex){
          ex.printStackTrace();
        }
        break;
        default:
          System.out.println("Invalid option!");
          break;
      }
    } while (choice != 0);
    scanner.close();
  }
}
