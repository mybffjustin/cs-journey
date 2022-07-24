// Justin Hoang
// 2022-JUL-24-SUN

import java.util.*;

public class AnalyzeNumbers {

  public static void main(String[] args) {
    int n;
    double[] numbers;
    double sum;
    double average;
    int count;
    int i;

    Scanner input = new Scanner(System.in);
    System.out.println("Enter the number of items: ");
    n = input.nextInt(); // Prompt user to enter the array size
    numbers = new double[n]; // Create array with user entered size
    sum = 0;

    System.out.print("Enter the numbers: ");
    for (i = 0; i < n; i++) {
      numbers[i] = input.nextDouble(); // Reads input and stores numbers into the array
      sum += numbers[i]; // Adds each number to sum
    }

    average = sum / n; // Obtain the average

    count = 0; // The number of elements above average
    // Compare each number in the array with the average to count the number of values above the average
    for (i = 0; i < n; i++) {
      if (numbers[i] > average) {
        count++;
      }
    }

    System.out.println("Average is " + average);
    System.out.println("Number of elements above the average is " + count);
  }
}