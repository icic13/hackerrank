/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java.loops;

import java.util.Scanner;

/**
 *
 * @author rana
 */
public class JavaLoops {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int t,a,b,n,sum;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while(t-->0){
            a = sc.nextInt();
            b = sc.nextInt();
            n = sc.nextInt();
            sum = a;
            for(int i = 0; i<n; i++){
                sum+= Math.pow(2,i)*b;
                System.out.print(sum+" ");
            }
            System.out.println();
        }
        
    }
    
}
