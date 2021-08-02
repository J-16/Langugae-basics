package Banking.bankingVScode;
import java.util.*;

public class Banking{
    public static CurrentAccount currentAccount = new CurrentAccount();
    public static SavingsAccount savingsAccount = new SavingsAccount();

    public static int mDeposit;
    public static int mWithDraw;
    public static int mBalance;


    public  static Accounts AccountType() {

        Scanner sc = new Scanner(System.in);
        char option;

        do{

            System.out.println("--------------------------------------------");
            System.out.println("Select Account Type : ");
            System.out.println("1. Savings Account");
            System.out.println("2. Current Account");
            System.out.println("--------------------------------------------");

            option = (char) sc.next().charAt(0);


            switch(option){
                case '1':
                    System.out.println("You selected Saving Account");
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    return savingsAccount;
                case '2':
                    System.out.println("You selected Current Account");
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    return currentAccount;
                default:
                    System.out.println("Enter Valid Account type");
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    break;
            }
        }   while((option != '1') || (option != '2'));

        return null;
    }

    public static void main(String[] args) {



        Accounts accountType = AccountType();

        char option=0;
        do{
            System.out.println("--------------------------------------------");
            System.out.println("Select : ");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Balance");
            System.out.println("Q. Quit");
            System.out.println("--------------------------------------------");

            Scanner sc = new Scanner(System.in);

            option = (char) sc.next().charAt(0);

            switch(option){

                case '1':
                    System.out.println("Enter amount to Deposit: ");
                    mDeposit = sc.nextInt();
                    accountType.deposit(mDeposit);
                    break;
                case '2':
                    System.out.println("Enter amount to Deposit: ");
                    mWithDraw = sc.nextInt();
                    accountType.withDraw(mWithDraw);
                    break;
                case '3':
                    System.out.println("Current Balance: "+ mBalance);
                    break;
                case 'Q':
                    break;
                default:
                    System.out.println("Invalid Input");
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    break;
            }

        } while(option != 'Q');

    }
}
