# You MUST modify this file
GCC = gcc
CFLAGS = -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror
LIBS = -lm
EXEC = hw4
# Flags for compilation
RUN_INTEGRATE = -DRUN_INTEGRATE
TEST_INTEGRATE = -DTEST_INTEGRATE

%.o : %.c 
	$(GCC) $(CFLAGS) $(RUN_INTEGRATE) $(TEST_INTEGRATE) -c $<

#main executable
$(EXEC): func1.o func2.o func3.o func4.o func5.o hw4.o integrator-hw4.o
	$(GCC) $(CFLAGS) -o $(EXEC) func1.o func2.o func3.o func4.o func5.o hw4.o integrator-hw4.o $(LIBS)

# Test all test cases
testall: $(EXEC)
	./$(EXEC) testcases/test1 test1.out
	./$(EXEC) testcases/test2 test2.out
	./$(EXEC) testcases/test3 test3.out
	./$(EXEC) testcases/test4 test4.out
	
clean:
	rm -f *.o
	rm -f testgen 
	rm -f *.gcda *.gcno gmon.out *gcov
	rm -f hw4 hw4.prof