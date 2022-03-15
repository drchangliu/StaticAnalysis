-- Fibonacci Sequence
-- Takes in the index or number of runs
-- Returns the fib value
fib :: Int -> Int
fib n
    | n == 0    = 0
    | n == 1    = 1
    | otherwise = fib(n-1) + fib(n-2)

-- main - runs on program call
main :: IO ()
main = do
    putStrLn "Please input a number: "
    number <- getLine
    print $ fib ( read number :: Int)