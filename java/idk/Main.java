public class Main{
  public static void main(String[] args){
    System.out.println("Hello!");
    printIntro();
  }
  public static void printIntro(){
    System.out.println("Intro");
  }
  public void getBMI(){
    Scanner scanner = new Scanner(System.in);
    System.out.println("Hight: ");
    double hight = scanner.nextInt();
    System.out.println("Weiight: ");
    double weight = scanner.nextInt();

    hight = hight * 0.3937;
    weight = weight * 2.2046;
  } 
}
