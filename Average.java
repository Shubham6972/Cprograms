import java.util.Scanner;

public class Average{
    public static void main(String args[]){
        Scanner scanner  = new Scanner(System.in);

        System.out.println("enter value of a:");
        int a = scanner.nextInt();

        System.out.println("enter value of b:");
        int b = scanner.nextInt();

        System.out.println("enter value of c:");
        int c  = scanner.nextInt();

        int average = (a+b+c)/2;

        System.out.println(average);


    }
}
