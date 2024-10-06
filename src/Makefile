CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
SOURCE = s21_*.c
OBJ = $(SOURCE:.c=.o)
TSRC = tests/arif/*.c tests/comp/*.c tests/conv/*.c tests/other/*.c tests/*.c
TOBJ = $(TSRC:.c=.o)
LIB_NAME = s21_decimal.a
UNAME = $(shell uname -s)
ifeq ($(UNAME), Linux)
		LIBS=-lcheck -lm -lrt -lpthread -lsubunit
endif
ifeq ($(UNAME), Darwin)
		LIBS=-lcheck
endif

all: clean $(LIB_NAME) test gcov_report

$(LIB_NAME):
	$(CC) $(CFLAGS) -c $(SOURCE)
	ar rc $(LIB_NAME) $(OBJ)
	ranlib $(LIB_NAME)

test: rebuild
	$(CC) $(CFLAGS) $(TSRC) $(LIB_NAME) -o test $(LIBS)
	./test

debug: rebuild
	$(CC) $(CFLAGS) -g $(LIBS) $(LIB_NAME) -o debug
	

gcov_report: clean
	$(CC) --coverage $(SOURCE) $(TSRC) -o s21_test -lcheck
	./s21_test
	lcov -t "s21_test" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	open ./report/index.html
	rm -rf *.gcno *.gcda *.info s21_test

rebuild: clean $(LIB_NAME)

style: 
	clang-format -style=Google -n *.h *.c tests/arif/*.c tests/comp/*.c tests/conv/*.c tests/other/*.c tests/*.c tests/*.h

style_ok: 
	clang-format -style=Google -n *.h *.c tests/arif/*.c tests/comp/*.c tests/conv/*.c tests/other/*.c tests/*.c tests/*.h
	clang-format -style=Google -i *.h *.c tests/arif/*.c tests/comp/*.c tests/conv/*.c tests/other/*.c tests/*.c tests/*.h

clean:
	rm -rf $(OBJ) $(TOBJ) s21_decimal report coverage.info *.o *.gcda *.gcno s21_test $(LIB_NAME)
