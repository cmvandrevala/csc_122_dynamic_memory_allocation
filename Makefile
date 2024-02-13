1: clean
	g++ 1_initial_garden_tracker.cpp -o 1_initial_garden_tracker
	./1_initial_garden_tracker

2: clean
	g++ 2_dynamic_memory_examples.cpp -o 2_dynamic_memory_examples
	./2_dynamic_memory_examples

3: clean
	g++ 3_memory_leak.cpp -o 3_memory_leak
	./3_memory_leak

4: clean
	g++ 4_dynamic_array.cpp -o 4_dynamic_array
	./4_dynamic_array

clean:
	@rm -f 1_initial_garden_tracker
	@rm -f 2_dynamic_memory_examples
	@rm -f 3_memory_leak
	@rm -f 4_dynamic_array
