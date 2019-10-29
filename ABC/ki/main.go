package main

import (
	"fmt"
)

// Node is tree
type Node struct {
	Count int
	Value int
	Right *Node
	Left  *Node
}

// NewNode is constractor
func NewNode(value int) *Node {
	l := new(Node)
	l.Value = value
	l.Right = nil
	l.Left = nil
	return l
}

func main() {
	var n, q int
	_, err := fmt.Scan(&n, &q)
	if err != nil {
		panic("error")
	}
	a := make([]*Node, n)
	for i := 0; i < n; i++ {
		a[i] = NewNode(i)
	}

	var parent, child int
	for i := 0; i < n-1; i++ {
		_, err := fmt.Scan(&parent, &child)
		if err != nil {
			panic("ERROR:1")
		}
		if a[parent-1].Right == nil {
			a[parent-1].Right = a[child-1]
		} else if a[parent-1].Left == nil {
			a[parent-1].Left = a[child-1]
		} else {
			panic("ERROR:2")
		}
	}

	for i := 0; i < q; i++ {
		var val, number int
		_, err := fmt.Scan(&number, &val)
		if err != nil {
			panic("ERROR:3")
		}
		count(val, a[number-1])
	}

	for i := 0; i < len(a); i++ {
		fmt.Print(a[i].Count)
        fmt.Print(" ")
	}
	fmt.Println()
}

func count(value int, point *Node) {
	point.Count += value
	if point.Right != nil {
		count(value, point.Right)
	}
    if point.Left != nil {
		count(value, point.Left)
	} 
    return
}
