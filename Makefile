question_2: main2.o question_2.o
	gcc -o question2 main2.o question_2.o

main2.o: main2.c
	gcc -c main2.c

question_2.o: question_2.c question_2.h
	gcc -c question_2.c


