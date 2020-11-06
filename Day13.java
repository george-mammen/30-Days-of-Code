/* 
Task : Given a Book class and a Solution class, write a MyBook class that does the following:
            Inherits from Book
            Has a parameterized constructor taking these  parameters:
                 string 
                 string 
                  int 
            Implements the Book class' abstract display() method so it prints these  lines:
                 , a space, and then the current instance's .
                 , a space, and then the current instance's .
                 , a space, and then the current instance's .
*/

import java.util.*;

abstract class Book {
    String title;
    String author;
    
    Book(String title, String author) {
        this.title = title;
        this.author = author;
    }
    
    abstract void display();
}

class MyBook extends Book {
    private int price;
    
    MyBook(String title, String author, int price) {
        super(title,author);
        this.price = price;
    }
    
    void display(){
        System.out.println("Title: "+title);
        System.out.println("Author: "+author);
        System.out.println("Price: "+price);
    } 
    
}
   
public class Day13 {
   
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String title = scanner.nextLine();
        String author = scanner.nextLine();
        int price = scanner.nextInt();
        scanner.close();

        Book book = new MyBook(title, author, price);
        book.display();
    }
}
