package finaltask;
import java.util.*;

public class BookStack{
  private Book[] books;
  private int size;

  public BookStack(int startingSize){
    books = new Book[startingSize];
    size = 0;
  }
  public void push(Book book){
    if(size >= books.length){
      resize();
    }
    books[size] = book;
    size++;
  }

  public Book pop(){

    books[size - 1] = null;
    return null;
  }

  public void resize(){
    books = Arrays.copyOf(books, size * 2);
  }
  
  public void searchByPrice(double minPrice){
    Arrays.sort(books);
    boolean isTrue= true;
    for(Book book : books){
      if(book.Price >= minPrice){
        System.out.print(book.Title);
        System.out.print(book.Author);
        System.out.println(book.Price);
        isTrue = false;
      }
      else if(isTrue){
        System.out.println("There are no books!");
      }
    }
  }

  public void printStackInformation(){
    if(size == 0){System.out.print("NEMA NIGI BRAT ME");}
    for(Book book : books){
      if(book != null){
        System.out.print(book.Title);
        System.out.print(book.Author);
        System.out.println(book.Price);
      }
    }
  }



}

