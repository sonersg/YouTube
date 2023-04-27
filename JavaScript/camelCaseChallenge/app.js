// String Challenge

// Camel Case

// Remove all non-letter characters in the string and put the string in camel case format!
// cute*lazy 131321dog -> cuteLazyDog

// Soner is so humble -> sonerIsSoHumble -> Camel Case
// Soner is so humble -> SonerIsSoHumble -> Pascal Case

function camelChallange(str) {
  str = str.replace(/[^a-zA-Z]/g, " ");
  newStr = "";

  for (let i = 0; i < str.length; i++) {
    if (str[i - 1] === " " && str[i] !== " ") {
      newStr += str[i].toUpperCase();
    } else {
      newStr += str[i].toLowerCase();
    }
  }
  newStr = newStr.replace(/[^a-zA-Z]/g, "");
  console.log(newStr);
}
camelChallange("cute*lazy 131321dog54545jumps over");
