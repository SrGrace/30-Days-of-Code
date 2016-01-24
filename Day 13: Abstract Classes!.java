/* Sourav_Verma  IPG_2013108
   ABV_IIITM , Gwalior   */
   
   
problems Link: " https://www.hackerrank.com/contests/30-days-of-code/challenges/day-13-abstract-classes "   


import java.util.*;
abstract class Book
{
    String title;
    String author;
    Book(String t,String a){
        title=t;
        author=a;
    }
    abstract void display();


}

//Write MyBook Class
class MyBook extends Book {
    int price;   
    
    public MyBook(String mtitle, String mauthor, int mprice) {
        super(mtitle, mauthor);
        price = mprice;
    }
    
    void display() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: " + price);
    }
}

public class Solution
{
   
   public static void main(String []args)
   {
      Scanner sc=new Scanner(System.in);
      String title=sc.nextLine();
      String author=sc.nextLine();
      int price=sc.nextInt();
      Book new_novel=new MyBook(title,author,price);
      new_novel.display();
      
   }
}

