package main

import(
    "fmt"
)

func main() {
    var a, b int
    fmt.Scan(&a, &b)
    if a > 9 || b > 9 {
        fmt.Println(-1)
    }else {
        fmt.Println(a*b)
    }
}
