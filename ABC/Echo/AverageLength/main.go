package main

import(
    "fmt"
    "math"
)

type town struct {
    x int
    y int
}

func main() {
    var n int
    fmt.Scan(&n)
    towns := make([]town, n)
    for i:=0;i < n;i++ {
        fmt.Scan(&towns[i].x, &towns[i].y)
    }
    //var result float64
    row := make([]float64, factorial(n-1)+1)

    count:=0
    for j:=0;count <= factorial(n-1);j++ {
        for i:=j+1;i < n;i++ {
            row[count]= calclen(towns[j], towns[i])
            count++
        }
    }
    for i:=0;i < len(row);i++ {
        fmt.Println(row[i])
    }
    //fmt.Println(result/float64(factorial(n)))
}

func calclen(before town, after town) (float64) {
    num := math.Sqrt(math.Pow(float64(before.x)-float64(after.x), 2) + math.Pow(float64(before.y)-float64(after.y), 2))
    return num
}

func permutation(n int, k int) int {
    v := 1
    if 0 < k && k <= n {
        for i := 0; i < k; i++ {
            v *= (n - i)
        }
    } else if k > n {
        v = 0
    }
    return v
}

func factorial(n int) int {
    return permutation(n, n - 1)
}
