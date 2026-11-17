import java.util.Arrays;
import java.util.List;

public class Main{
  public void main(){
    List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);

    List<Integer> result = numbers.stream().map(n -> n * n).toList();

    System.out.println(result);
  }
}
