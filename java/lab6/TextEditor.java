package lab6;

import java.lang.reflect.Array;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class TextEditor{
  public void changeAWord(List<String> text, String wordToChange, String newWord){
    for(int i = 0; i < text.size(); i++){
      if(text.get(i).equals(wordToChange)){
        text.set(i, newWord);
      }
    }
  }
  public void invert(List<String> text){
    int size = text.size() - 1;
    int tempSize = size;
      
    for (int i = 0; i < size / 2; i++){
      String temp = text.get(i);
      text.set(i, text.get(tempSize));
      text.set(tempSize, temp);
      tempSize--;
    }
  }
  public ArrayList<String> regex(List<String> text){
    ArrayList<String> emails = new ArrayList<>();
    int count = 0;
    for(int i = 0; i < text.size(); i++){
      
      Pattern pattern = Pattern.compile("[^\s@]+@[^\s@]+.[^\s@]+");
      Matcher matcher = pattern.matcher(text.get(i));
      while(matcher.find()){
        emails.add(matcher.group().toString());
        count++;
      }
    }
    System.out.println("Counter: " + count);
    return emails;
  }
}
