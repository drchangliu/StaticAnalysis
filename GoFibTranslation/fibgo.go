/**
* @file main.go
* @brief Tests and defines functions for calculating the nth number in the fibonacci sequence in Go
* @author Liam Speakman, Original implementation from Krerkkiat Chusap
**/
package main

import "fmt"

func main() {
	var n int
	fmt.Println("Welcome to a Go implementation of the fibonacci example!")

	fmt.Println("Please enter a number you would like to calculate the nth fibonacci number for:")
	fmt.Println("Warning: number less than 1 will yield -1")
	fmt.Scanf("%d", &n) 
	fmt.Println(fibRec(n))
	fmt.Println(fibItr(n))

}
/**
* @brief Calculates the fibonacci sequence recursively
* The function fibRec recursively calculates the fibonacci sequence for some number n
* This function assumes that the number passed in is greater or equal to 1
* If the number given is less than 1, this function will return -1
* Base case: f(1)=f(2)=1
* Invariant: f(n)=f(n-1)+f(n-2)
* @param n an integer to be used to calculate the nth fibonacci number
* @return a integer of the nth fibonacci number
**/
func fibRec(n int) int {
	if n < 1 {
		return -1
	}
	if n == 1 || n == 2 {
		return 1
	}
	return fibRec(n - 1) + fibRec(n - 2)
}
/**
* @brief Calculates the fibonacci sequence iteratively
* The function fibItr iteratively calculates the fibonacci sequence for some number n
* This function assumes that the number passed in is greater or equal to 1
* If the number given is less than 1, this function will return -1
* @param n an integer to be used to calculate the nth fibonacci number
* @return a integer of the nth fibonacci number
**/
func fibItr(n int) int {
	var a, b, temp = 1, 1, 0
	if n < 1 {
		return -1
	}
	if n == 1 || n == 2 {
		return 1;
	}	
	for i := 3; i <= n; i++ {
		temp = b;
		b = a + b;
		a = temp;
	}
	return b;
}