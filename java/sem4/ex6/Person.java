package ex6;


public class Person{
  private final String name;
  private final int age;
  private final String city;
  private final String egn;

  public Person(String name,int age, String city, String egn){
    this.name = name;
    this.age = age;
    this.city = city;
    this.egn = egn;
  }

  public String getName(){
    return name;
  }
  public int getAge(){
    return age;
  }
  public String getCity(){
    return city;
  }
  public String getEgn(){
    return egn;
  }

  @Override
  public String toString(){
    return "Person{" +
            "name='" + name + '\'' +
            ", age=" + age + 
            ", city='" + city + '\'' +
            ", egn='" + egn + '\'' + 
            '}';
  }
}
