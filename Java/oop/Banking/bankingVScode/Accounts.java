package Banking.bankingVScode;
abstract public class Accounts {

  private int mBalance;

  private int AccountNumber;

  public int getBalance(){
      return mBalance;
  }

  public void setBalance(int balance){
      mBalance = balance;
  }

  public void deposit(int amount){
      if(amount <=0){
          System.out.println("Enter valid amount!");
          return;
      }

      mBalance += amount;

      System.out.println("Current Balance : "+ getBalance());
  };

  public abstract void withDraw(int amount);
}
