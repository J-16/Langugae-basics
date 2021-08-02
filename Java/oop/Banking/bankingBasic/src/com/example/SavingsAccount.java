package Banking.bankingBasic.src.com.example;

public class SavingsAccount extends Accounts{

    @Override
    public void withDraw(int amount) {

        if(getBalance() == 0 || getBalance() < amount){
            System.out.println("Insufficient Balance to make this transaction");
            return;
        }

        if(amount <= 0){
            System.out.println("Enter valid amount");
            return;
        }

        int balance = getBalance();
        balance -= amount;

        setBalance(balance);

        System.out.println("SuccessFull \n Current balance"+ getBalance());

    }


}
