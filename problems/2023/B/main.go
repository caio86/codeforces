package main

import (
	"fmt"
	"math"
	"strconv"
)

func solve(n int) int {
	for i := range int(math.Pow(2, float64(n))) {
		if i%2 == 0 {
			continue
		}

		binaryStr := fmt.Sprintf("%0*b", n, i)

		customBinaryStr := ""
		for _, char := range binaryStr {
			if char == '0' {
				customBinaryStr += "3"
			} else if char == '1' {
				customBinaryStr += "6"
			}
		}

		realNumber, _ := strconv.Atoi(customBinaryStr)

		if realNumber%66 == 0 {
			return realNumber
		}

	}

	return -1
}

func main() {
	var tests int

	fmt.Scanf("%d", &tests)

	for range tests {
		var n int
		fmt.Scanf("%d", &n)

		fmt.Println(solve(n))
	}
}
