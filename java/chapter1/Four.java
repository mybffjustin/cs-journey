// Justin Hoang
// 2022-JUL-21-THU
// Chapter 1
// Programming Exercise 1.4
// (Print a table) Write a program that displays the following table:
//    a a^2 a^3 a^4
//    1 1 1 1
//    2 4 8 16
//    3 9 27 81
//    4 16 64 256

public class Four {

  public static void main(String[] args) {
    int row;
    int col;
    int val;
    System.out.println();
    System.out.println("a\ta^2\ta^3\ta^4");
    for (row = 1; row <= 4; row++) {
      for (col = 1; col <= 4; col++) {
        val = (int) Math.pow(row, col);
        System.out.print(val + "\t");
      }
      System.out.println();
    }
  }
}