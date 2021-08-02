package com.company;

import java.util.concurrent.TimeUnit;

class thread extends Thread {
    synchronized public void run() {
        long random = (long) (Math.random()+1);
        String prog = "-";
        System.out.print("\r[");
        for(int i=0;i<10;i++){
            try {
                TimeUnit.SECONDS.sleep( random );
                System.out.print("-");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.print("]\n");
    }
}

public class Main extends Thread{

    public static void main(String[] args){
	// write your code here
        for(int i=0;i<2;i++){
            thread t = new thread();
            try {
                System.out.println();
                t.start();
                TimeUnit.SECONDS.sleep( 2 );
            } catch (InterruptedException e) { }
        }
    }

}
