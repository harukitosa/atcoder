package main

import(
    "fmt"
)

func main() {
    var n, m int
    fmt.Scan(&n, &m)
    a:=make([]int, m)
    for i:=0;i < m;i++ {
        fmt.Scan(&a[i])
    }

    for i:=0;i < m;i++ {
        
    }
    
}

func fib(n int) int {
    var res [2]int
    res[0] = 1
    res[1] = 1
    for i:=1;i < n;i++ {
        store:=res[1]
        res[1] += res[0]
        res[0] = store
    }

    return res[1]
}
