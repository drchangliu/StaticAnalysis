use context essentials2021
# A Recursive implementation of Fib using Pyret

fun fib(n :: Number) -> Number:
  ask:
    | n == 0 then: 0
    | n == 1 then: 1
    | otherwise: fib(n - 2) + fib(n - 1)
  end
where:
  fib(0) is 0
  fib(1) is 1
  fib(2) is 1
  fib(3) is 2
  fib(4) is 3
  fib(5) is 5
  fib(10) is 55
end