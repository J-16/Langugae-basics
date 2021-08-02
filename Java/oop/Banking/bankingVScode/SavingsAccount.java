package Banking.bankingVScode;
public class SavingsAccount extends Accounts{

  @Override
  public void withDraw(int amount) {

      if(amount <= 0){
          System.out.println("Enter valid amount");
          return;
      }

      int balance = getBalance();
      balance -= amount;

      setBalance(balance);

      System.out.println("Enter valid amount"+ getBalance());

  }

}