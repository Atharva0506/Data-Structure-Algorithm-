# Program to print the fibonacci series upto n_terms

def fibonacci(n):
    if(n <= 1):
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
    
print(fibonacci(2))