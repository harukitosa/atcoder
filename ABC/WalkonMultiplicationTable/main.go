package main

import(
    "fmt"
    "math"
)

func main() {
    var n int
    fmt.Scan(&n)
    if isPrime2(n) {
        fmt.Println(n-1)
        return
    }
    for i:= int(math.Sqrt(float64(n)));i > 0;i-- {
        if n % i == 0 {
            fmt.Println(i+n/i-2)
            return
        }
    }
}

func isPrime2(x int) bool {
    if x == 1 {
        return false
    }
    if x == 2 {
        return true
    }
    if x%2 == 0 {
        return false
    }

    b := true
    rootx := int(math.Sqrt(float64(x)))
    i := 3
    for i <= rootx {
        if x%i == 0 {
            b = false
            break
        }
        i += 2
    }
    return b
}
