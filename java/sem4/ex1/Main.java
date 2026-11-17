import java.util.Arrays;
import java.util.List;

public class Main{
  public void main(){
    List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5 ,6 ,7, 8, 9, 10);

    List<Integer> result = numbers.stream().filter(n -> n % 2 == 0).toList();

    System.out.println(result);
  }
}
