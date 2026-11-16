package lab7;

public class Hash{
  private int number;
  public Hash(int number){
    this.number = number;
  }


  @Override 
  public int hashCode(){
    int result = 42;
    result = result * this.cringe() *this.number;
    result += 67;
    return result;
  }
  private int cringe(){
    int data = 67;
    int magicNumber = 42;
    data += magicNumber + data + (data * magicNumber);
    return data;
  }
}
