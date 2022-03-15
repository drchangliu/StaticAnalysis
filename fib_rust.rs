/**
 * @author Jack Ramsey
 * @file fib_rust.rs
 * @brief rust implementation of fibonacci sequence
 */

fn main() {
    //checking first 10 digits starting at 1
    for num in 1..11 {
        println!("Fib({}) = {}", num, fib(num));
    }
}

fn fib(n:u32) -> u32 {
    if n <= 0 {
        return 0;
    } else if n == 1 {
        return 1;
    }
    fib(n - 1) + fib(n-2)
} 