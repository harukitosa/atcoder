package main

import (
	"fmt"
)

func main() {
	var n, k, q int
	_, err := fmt.Scan(&n, &k, &q)
	if err != nil {
		panic("ERROR")
	}
	t := make([]int, q)
	for i := 0; i < q; i++ {
		_, err := fmt.Scan(&t[i])
        if err != nil {
            panic("ERROR")
        }
	}

	num := make([]int, n)
	for i := 0; i < q; i++ {
		num[t[i]-1]++
	}

	for j := 0; j < n; j++ {
		if num[j]+k-q <= 0 {
			fmt.Println("No")
		} else {
			fmt.Println("Yes")
		}
	}
}
