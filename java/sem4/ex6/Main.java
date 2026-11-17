package ex6;
import java.util.*;
import java.util.stream.*;;

public class Main{
  public void main(){
    List<Person> people = Arrays.asList(
      new Person("Ivan", 25, "Sofia", "0000000001"),
      new Person("Maria", 17, "Sofia", "0000000002"),
      new Person("Georgi", 32, "Plovdiv", "0000000003"),
      new Person("Elena", 19, "Sofia", "0000000004"),
      new Person("Petar", 16, "Varna", "0000000005"),
      new Person("Desislava", 45, "Sofia", "0000000006"),
      new Person("Nikolay", 21, "Burgas", "0000000007"),
      new Person("Victoria", 18, "Sofia", "0000000008"),
      new Person("Dimitar", 15, "Sofia", "0000000009"),
      new Person("Gabriela", 29, "Ruse", "0000000010")
    );

    List<Voter> voters = people.stream()
                      .filter(person -> person.getAge() >= 18 && person.getCity() == "Sofia")
                      .map(person -> new Voter(person.getName(), person.getCity(), person.getEgn()))
                      .collect(Collectors.toList());

    System.out.println("Voter in Sofia: ");
    System.out.println(voters.stream()
                        .sorted((voter1, voter2) -> voter1.name.compareTo(voter2.name))
                        .map(Voter::toString)
                        .collect(Collectors.joining("\n"))
    );
  }
}
