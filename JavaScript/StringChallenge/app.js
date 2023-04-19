/**
 * STRING CHALLENGE
 *
 * let str = "s2on34r evlen7988mekte kararsız56";
 *
 * We will be given a string which has letters and numbers mixed in words.
 * We are said to return true if all the words has 2 numbers next to each other.
 *
 */

function stringChallenge(str) {
  let counter = 0;
  let newArr = str.split(" ");
  for (let i = 0; i < newArr.length; i++) {
    for (let j = 0; j < newArr[i].length; j++) {
      if (!isNaN(newArr[i][j]) && !isNaN(newArr[i][j + 1])) {
        counter++;
      }
    }
  }
  console.log(counter === newArr.length ? true : false);
}

stringChallenge("s2on34r evlen88mekte kararsız56 son56er");
