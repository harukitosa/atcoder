package main

import (
	"fmt"
)

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)
    if c != 1 && d != 1 {
        if a != b {
            if c != d {
                cResult := calcCount(a, b, c)
                dResult := calcCount(a, b, d)
                var cdResult int
                cdResult = calcCount(a, b, lcm(c, d))
                res := cResult + dResult - cdResult
                fmt.Println(b - a + 1 - res)
            } else {
                fmt.Println(b - a + 1 - calcCount(a, b, c))
            }
        } else {
            if a%c == 0 {
                fmt.Println(0)
            } else if a%d == 0 {
                fmt.Println(0)
            } else {
                fmt.Println(1)
            }
        }
    } else {
        fmt.Println(0)  
    }

}

func calcCount(head int, tail int, num int) int {
	headMod := head % num
	if headMod != 0 {
		headMod = num - headMod
	}
	tailMod := tail % num
	store := tail - head + 1 - tailMod - headMod
	if store <= 0 {
		store = 0
	}
    if num > tail{
        return 0
    } else {
	res := store/num + 1
        return res
    }
}

func gcd(a int, b int) int {
	if b == 0 {
		return a
	}
	return gcd(b, a%b)
}

func lcm(a int, b int) int {
	return a * b / gcd(a, b)
}
