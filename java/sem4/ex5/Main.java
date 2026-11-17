import java.util.Arrays;
import java.util.List;

public class Main{
  public void main(){
    List<Integer> numebrs = Arrays.asList(2, 5, 3, 6, 2, 4, 5, 2);

    List<Integer> valid = numebrs.stream().filter(n -> n >= 3).toList();
    System.out.println(valid.stream().count());
  }
}
