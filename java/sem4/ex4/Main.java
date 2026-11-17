import java.util.Arrays;
import java.util.List;

public class Main{
  public void main(){
    List<Integer> numbers = Arrays.asList(5, 2, 5, 8, 2, 1, 8, 3);

    List<Integer> result = numbers.stream().distinct().sorted().toList();

    System.out.println(result);
  }
}
