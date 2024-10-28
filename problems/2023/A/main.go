package main

import (
	"fmt"
	"math"
)

func formula(m, r, c int) int {
	return (r-1)*m + c
}

func calculateDistance(m, r, c int) int {
	var r1, c1 int
	if c <= 1 {
		r1 = r - 1
		c1 = m
	} else {
		r1 = r
		c1 = c - 1
	}

	rt := math.Abs(float64(r - r1))
	ct := math.Abs(float64(c - c1))

	res := int(rt + ct)

	return res
}

func main() {
	var testCases int
	fmt.Scanf("%d", &testCases)

	for range testCases {
		var n, m, r, c int

		fmt.Scanf("%d %d %d %d", &n, &m, &r, &c)

		// sum := 0
		// for i := r - 1; i < n; i++ {
		// 	for j := 0; j < m; j++ {
		// 		if i == r-1 && j <= c-1 {
		// 			continue
		// 		}
		// 		if j != 0 {
		// 			sum += 1
		// 			continue
		// 		}
		//
		// 		sum += calculateDistance(m, i+1, j+1)
		// 	}
		// }

		linhas := n - r
		fmt.Println("test", linhas*m, m-c, linhas*(m-1))

		res := (linhas * m) + (m - c) + (linhas * (m - 1))

		fmt.Println(res)
	}
}
