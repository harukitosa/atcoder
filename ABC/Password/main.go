package main

import(
    "fmt"
    "math"
)

func main() {
    var n int
    fmt.Scan(&n)
    fmt.Println(math.Pow(float64(n), float64(3)))
}
