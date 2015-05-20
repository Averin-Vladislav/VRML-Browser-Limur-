GCP = g++
CFLAGS = -L -Wall -pedantic -Wextra -std=c++11 
LIBS = -lGL -lGLU -lglut

all: figures util link


figures:
	$(GCP) -c figure.cpp -o obj/figure.o $(CFLAGS)
	$(GCP) -c cone.cpp -o obj/cone.o $(CFLAGS)
	$(GCP) -c cube.cpp -o obj/cube.o $(CFLAGS)
	$(GCP) -c cylinder.cpp -o obj/cylinder.o $(CFLAGS)
	$(GCP) -c parallelepiped.cpp -o obj/parallelepiped.o $(CFLAGS)
	$(GCP) -c prism.cpp -o obj/prism.o $(CFLAGS)
	$(GCP) -c sphere.cpp -o obj/sphere.o $(CFLAGS)
	$(GCP) -c pyramid.cpp -o obj/pyramid.o $(CFLAGS)

util:
	$(GCP) -c browser.cpp -o obj/browser.o $(CFLAGS)
	$(GCP) -c parser.cpp -o obj/parser.o $(CFLAGS)
	$(GCP) -c main.cpp -o obj/main.o $(CFLAGS)
	$(GCP) -c figureQueue.cpp -o obj/figureQueue.o $(CFLAGS)


link:
	$(GCP) -o limur obj/figureQueue.o obj/main.o obj/parser.o obj/browser.o \
		 obj/pyramid.o obj/sphere.o obj/prism.o obj/parallelepiped.o \
		 obj/cylinder.o obj/cube.o obj/cone.o obj/figure.o $(LIBS)
