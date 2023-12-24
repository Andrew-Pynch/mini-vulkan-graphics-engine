include .env

CFLAGS = -std=c++17 -I. -I$(VULKAN_SDK_PATH)/include -I/opt/homebrew/opt/glfw/include
LDFLAGS = -L$(VULKAN_SDK_PATH)/lib -L/opt/homebrew/opt/glfw/lib `pkg-config --static --libs glfw3` -lvulkan

a.out: *.cpp *.hpp
	g++ $(CFLAGS) -o a.out *.cpp $(LDFLAGS)

.PHONY: test clean

test: a.out
	./a.out

clean:
	rm -f a.out
