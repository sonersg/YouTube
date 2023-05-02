// Meal Price Challange
// Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

// Example
// mealCost = 100,
// tipPercent = 15,
// taxPercent = 8,
// A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value 123 and return from the function.

function totalPrice(mealCost, tipPercent, taxPercent) {
  return (
    mealCost + mealCost * (tipPercent / 100) + mealCost * (taxPercent / 100)
  );
}

console.log(totalPrice(100, 15, 8));
