package main

import(
    "fmt"
)


func main() {
    var x,y int
    fmt.Scan(&x, &y)
    if x <= y*2 {
        fmt.Println(0)
        return
    } else {
        fmt.Println(x -y * 2)
        return
    }
}

