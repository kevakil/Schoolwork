/* File: IntStack.java
 * Author: Wayne Snyder
 * Date: 2/5/2015
 * Purpose: This is part of the Solution for Lab 03
 */

public class IntStack {

 private final int SIZE = 20;

 private int[] S = new int[SIZE];              // Array holding a stack of integers
 private int next = 0;                         // next available slot in the stack


 // Remove top element and return it
 public int pop(){
   try{
     next--;
     return S[next];
   }
   catch(ArrayIndexOutOfBoundsException e){
     System.out.println("Stack Underflow!");
     //System.exit(1);
   }
   return -1;
 }

 // Insert a new element at the top of the stack
 public void push(int n) {
   try{
     S[next] = n;
     ++next;
   }
   catch(ArrayIndexOutOfBoundsException e){
     System.out.println("Stack Overflow! Can not push " + n);
   }
 }

 public boolean isEmpty() {
  return next == 0;
 }

 public int size() {
  return next;
 }

 // Return a String representation suitable for printing and debugging
 public String toString() {
  String s = "";
  for (int i = next - 1; i >= 0; --i)
   s += "   " + S[i] + "\n";
  s +=   " ____\n";
  return s;
 }


 // Unit Test
 public static void main(String [] args) {

  System.out.println("Unit Test for IntStack\n");
  IntStack S = new IntStack();
  System.out.println("Push 4, 8, 2:");
  S.push(4);
  S.push(8);
  S.push(2);
  System.out.println("\n" + S);
  System.out.println("\npop: " + S.pop());
  System.out.println("\n" + S);
  System.out.println("size = " + S.size());
  System.out.println("push 3");
  S.push(3);
  System.out.println("\n" + S);
  System.out.println("Pop everything and print: ");
  while (!S.isEmpty()) {
   System.out.println(S.pop());
  }
  System.out.println("Try to generate an exception: ");
//  S.pop();
  for(int i = 0; i<99; i++){
    S.push(54);
  }
 }

}