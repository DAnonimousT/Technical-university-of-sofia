package ex6;

public class Voter{
  public String name;
  public String city;
  public String egn;

  public Voter(String name, String city, String egn){
    this.name = name;
    this.city = city;
    this.egn = egn;
  }

  @Override
  public String toString(){
    return "Person{" +
            "name='" + name + '\'' +
            ", city='" + city + '\'' +
            ", egn='" + egn + '\'' + 
            '}';
  }
}
