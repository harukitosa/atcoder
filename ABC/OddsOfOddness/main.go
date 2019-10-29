package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	count := 0
	for i := 0; i <= n; i++ {
		if i%2 == 1 {
			count++
		}
	}

	fmt.Println(float64(count) / float64(n))
}
