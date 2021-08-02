package Banking.bankingAdvance.src.com.company;

import java.util.*;

public class Main {

    private String mName;
    private String mId;

    private static int mBalance;
    private static int mWithDraw;
    private static int mDeposit;

    // Banking(String name, String id){
    //   mName = name;
    //   mId=id;
    // }

    public static void Deposit(int deposit){

        if(deposit< 0){
            System.out.println("Enter valid amount");
        }
        else if(deposit == 0){
            return;
        }
        else {
            mBalance += deposit;
            System.out.println("Deposited successfully \n Current balance : " + mBalance);
        }

    }

    public static void Withdraw(int withdraw){

        if(mBalance <= 0){
            System.out.println("You balance is not sufficient to make this action");
        }
        else if(withdraw <0){
            System.out.println("You balance is not sufficient to make this action");
        }
        else {
            mBalance -= withdraw;
            System.out.println("Successful \n Current Balance :" + mBalance);
        }

    }

    public static void main(String[] args){

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
                    Deposit(mDeposit);
                    break;
                case '2':
                    System.out.println("Enter amount to Deposit: ");
                    mWithDraw = sc.nextInt();
                    Withdraw(mWithDraw);
                    break;
                case '3':
                    System.out.println("Current Balance: "+ mBalance);
                    break;
                case 'Q':
                    break;
                default:
                    System.out.println("Invalid Input");
                    break;
            }

        } while(option != 'Q');

    }
}
