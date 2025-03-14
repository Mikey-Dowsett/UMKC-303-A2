## readme
### Linked List
The linked list contains these functions:
1. push_back
2. push_front
3. pop_back
4. pop_front
5. front
6. back
7. is_empty
8. insert
9. remove
10. find
11. print

Main contains a method which tests all of these methods and outputs the results.

### Stack
The stack contains these methods:
1. push
2. pop
3. peek
4. is_empty
5. average
6. print

Main contains a method which tests all of these methods and outputs the results

### Output
#### Running main produces the following output
``` 
LINKED LIST TEST
Is Empty: 1
Test Push Back(1, 2, 3)
1 2 3
Test Push Front(4, 5, 6)
6 5 4 1 2 3
Test Pop Back
6 5 4 1 2
Test Pop Front
5 4 1 2
Front: 5
Back: 2
Is Empty: 0
Test Insert((0,3),(3,7),(7,9))
3 5 4 7 1 2 9
Test Remove(index: 3): 1
3 5 4 1 2 9
Test Remove(index: 10): 0
3 5 4 1 2 9
Test Find(data: 3): 0
Test Find(data: 9): 5
Test Find(data: 20): 6

STACK TEST
Test Push Back(21, 72, 38, 101)
21 72 38 101
Test Empty: 0
Test Top: 101
Test Average: 58
Test Pop: (101, 38, 72, 21)
Pop: 101
Pop: 38
Test Top: 72
Pop: 72
Pop: 21
Test Empty: 1
```