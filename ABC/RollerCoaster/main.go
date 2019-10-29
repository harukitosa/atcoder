package main

import (
	"fmt"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)
	var h [10000000]int
	for i := 0; i < n; i++ {
		var num int
		fmt.Scan(&num)
		h[i] = num
	}

	count := 0
	for i := 0; i < n; i++ {
		if h[i] >= k {
			count++
		}
	}
	fmt.Println(count)
}
