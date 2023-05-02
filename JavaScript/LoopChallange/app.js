// Loop Challange

// Given an integer, n , print its first 10 multiples.
// Each multiple n x i (where 1 <= i <= 10 )
// Should be printed on a new line in the form: n x i = result.

// Example
// The printout should look like this:
// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30

function firstTenMultiples(n) {
  for (let i = 1; i <= 10; i++) {
    console.log(`${n} x ${i} = ` + n * i);
  }
}

firstTenMultiples(3);
