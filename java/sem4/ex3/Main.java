import java.util.Arrays;
import java.util.List;

public class Main{
  public void main(){
    List<String> names = Arrays.asList(
      "Petar", "Ivan", "Anna", "Alexandar", "Maria", "Andrew"
    );

    List<String> result = names.stream().filter(name -> name.startsWith("A")).sorted(( name1, name2) -> name1.compareTo(name2)).toList();

    System.out.println(result);
  }
}
