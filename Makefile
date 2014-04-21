qt5noblink.so: qt5noblink.cpp
	g++ -fPIC -shared -o $@ $^
