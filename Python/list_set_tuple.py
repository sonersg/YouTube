
# List [] : mutable, most flexible
# Tuple () : immutable, faster
# Set {} : mutable (add, remove), unordered, no duplicates

# #LISTS
# animals = ["dog", "elephant", "marmot"]

# animals[0] = "wolf"
# animals.append("bird")
# animals.remove("elephant")
# animals.clear()

# #TUPLES
# animals = ("dog", "elephant", "marmot")

# SETS
animals = {"dog", "elephant", "marmot", "dog"}
animals.add("cat")
animals.add("cat")


print()
for item in animals:
    print(f"{item} ", end="")
print()
