program: main.c gen_num.c
	gcc main.c gen_num.c -o main

clean:
	rm main

test: program
	bash test.sh
