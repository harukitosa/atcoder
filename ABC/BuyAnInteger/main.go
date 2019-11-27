package main

import(
    "fmt"
)

func keta(n int) int {
    count := 0
    for {
        count++
        n = n/10
        if n < 10 {
            return count + 1
        }
    }
}


func main() {
    var a, b, x int
    maxNum := 1000000000
    fmt.Scan(&a, &b, &x)
    if x > a * maxNum + b * maxNum {
        fmt.Println(maxNum)
        return
    }

    high := maxNum
    row := 0
    for i := maxNum/2;i > 0;{
        num := a * i + b * keta(i)
        if x > num {
            k := (i + high)/2
            row = i
            i = k
            fmt.Printf("high:%d\nrow:%d\n", high, row)
        } else if x < num {
            k := (i - row)/2
            high = i
            i = k
            fmt.Printf("high:%d\nrow:%d\n", high, row)
        }
        if high - row <= 1 {
            number := a * high + b * keta(high)
            if number < x {
                fmt.Println(high)
            } else {
                fmt.Println(row)
            }
            return
        }
    }
   
}
