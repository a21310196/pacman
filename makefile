run : bin/tazo
	./bin/tazo

runmem : bin/mem
	./bin/mem

runanimacion : bin/animacion
	./bin/animacion 

bin/animacion : src/canvas_animated.cpp
	g++ src/canvas_animated.cpp -Iinclude -o bin/animacion -std=c++2a -lftxui-screen -lftxui-dom -lftxui-component 

bin/tazo : src/Main.cpp
	g++ src/Main.cpp -Iinclude -o bin/tazo

bin/mem : src/memoria.cpp
	g++ src/memoria.cpp -Iinclude -o bin/mem


assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje

runprueba : bin/animacion
	./bin/animacion
bin/animacion : src/prueba.cpp
	g++ src/prueba.cpp -Iinclude -o bin/animacion -std=c++2a -lftxui-screen -lftxui-dom -lftxui-component 

runelemento : bin/elemento
	./bin/elemento
bin/elemento : src/elemento.cpp
	g++ src/elemento.cpp -Iinclude -o bin/elemento -std=c++2a -lftxui-screen -lftxui-dom -lftxui-component 