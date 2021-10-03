package com.company;
import java.util.*;
import java.util.Scanner;
public class reverseArray {

    public static void main(String args[]) {
        int N, i = 0, j = 0, temp;
        int arr[] = new int[20];

        System.out.print("Enter the number of elements: ");
        Scanner scanner = new Scanner(System.in);

        N = scanner.nextInt();

        for (i = 0; i < N; i++) {
            System.out.print("Enter elements of array" + (i + 1) + ": ");
            arr[i] = scanner.nextInt();
        }

        j = i - 1;
        i = 0;
        scanner.close();
        while (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        System.out.print("Reversed array is : [ ");
        for (i = 0; i <N; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.print("]");
    }
}
