package main

import(
    "fmt"
)

func main() {
    var l, r int
    fmt.Scan(&l, &r)

    if r - l >= 2019 {
        fmt.Println(0)
        return
    }

    var min int
    min = 2020
    for i:= l;i <= r-1;i++ {
        for j:= l+1;j <= r; j++ {
            if min > (i*j)%2019 {
                min = (i*j)%2019
            }
        }
    }

    fmt.Println(min)
}
