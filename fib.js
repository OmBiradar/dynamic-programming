const fib = (n) => {
    if (n <= 2) return 1;
    return fib(n - 1) + fib(n - 2);
};
// hello world
console.log("Fibonacci numbers :")
console.log(fib(7));
console.log(fib(10));
console.log(fib(50));