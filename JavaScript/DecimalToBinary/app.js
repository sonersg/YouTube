// Decimal To Binary

function decimalToBinary(decimalNumber) {
  let str = "";
  while (decimalNumber >= 1) {
    if (decimalNumber % 2 === 0) {
      str += "0";
      decimalNumber = Math.floor(decimalNumber / 2);
      console.log(decimalNumber);
    } else {
      str += "1";
      decimalNumber = Math.floor(decimalNumber / 2);
      console.log(decimalNumber);
    }
  }
  console.log(str.split("").reverse().join());
}

decimalToBinary(23); // 10111
