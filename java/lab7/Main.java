package lab7;

import java.util.*;

public class Main{
  public void main(String[] args){
    LinkedList<Integer> l1 = new LinkedList<>();
    ArrayList<Integer> l2 = new ArrayList<>();
    Map<String, Integer> finalList = new HashMap<>();
    Random random = new Random();

    for(int i = 0; i < 10; i++){
      l1.add(i);
      l2.add(i);

      //l1.add(random.nextInt());
      //l2.add(random.nextInt());
    }
    for(int i = 0; i < 10; i++){
      Hash hash1 = new Hash( l1.get(i));
      Hash hash2 = new Hash( l2.get(i));
      int hashL1 = hash1.hashCode();
      int hashL2 = hash2.hashCode();

      if(hashL1 == hashL2){
        System.out.println(hashL1 + " = " + hashL2);
      }
      else if (hashL1 > hashL2){
        System.out.println(hashL1 + " > " + hashL2);
        finalList.put("From l1: ", hashL1);
      }
      else if(hashL1 < hashL2){
        System.out.println(hashL1 + " < " + hashL2);
        finalList.put("From l2: ", hashL2);
      }
      else{
        System.out.println("WTF ARE YOU DOING!");
      }
    }
  }
}
