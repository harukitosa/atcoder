package main

import(
    "fmt"
    "sort"
    "math"
)

func main() {
    var n int
    var num []int
    
    fmt.Scan(&n)
    for i:=0;i < n;i++ {
        var d int
        fmt.Scan(&d)
        num = append(num, d)
    }
    if num[0] != 0 {
        fmt.Println(0)
        return
    }
    sort.Ints(num)
    if num[1] == 0{
        fmt.Println(0)
        return
    }
    second, flag, start := con(num, 0, 0)
    if !flag {
        fmt.Println(0)
        return
    }
    first := 0
    res := 1
    start = 0
    for i:=1;i < len(num);i++ {
        first = second
        second, flag, start = con(num, i, start)
        if !flag {
            fmt.Println(0)
            return
        }
        res*=pow(first, second)
    }

    fmt.Println(res%998244353)
}

func con(num []int, target int, start int) (int, bool, int) {
    result := 0
    head := 0
    for i:=start;i < len(num);i++ {
        if num[i] == target {
            result++
        } else if num[i] > target {
            if num[i] > target+1 {
                return result, false, i
            }
            return result, true, i
        }
        head = i
    }
    return result, true, head
}

func pow(p, q int) int {
    return int(math.Pow(float64(p), float64(q)))
}
