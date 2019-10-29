package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, m int
	fmt.Scan(&n, &m)

	// Good
	t := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&t[i])
	}
	sort.Ints(t)

	for i := 0; i < m; i++ {
		t[len(t)-1] /= 2
	}
	var result int
	for i := 0; i < n; i++ {
		result += t[i]
	}
	fmt.Println(result)
}
