package main

import(
    "fmt"
)

func main() {
    var w, m, x, y int
    fmt.Scan(&w, &m, &x, &y)
    
    fmt.Print(float64(w)*float64(m)/2)
    fmt.Print(" ")
    if (w % 2 == 0 && x == w/2) && (m % 2 == 0 && y == m/2) {
        fmt.Println(1)
    }else {
        fmt.Println(0)
    }
}
