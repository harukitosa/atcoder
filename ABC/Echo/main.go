package main

import(
    "fmt"
)

func main() {
    var n int
    var s string
    fmt.Scan(&n, &s)
    if n % 2 == 1 {
        fmt.Println("No")
        return
    } else {
        for i:=0;i < n/2;i++ {
            if s[i:i+1] != s[n/2+i:n/2+i+1] {
                fmt.Println("No")
                return
            } 
        }
        fmt.Println("Yes")
    }
}


